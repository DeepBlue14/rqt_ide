// Declares clang::SyntaxOnlyAction.
#include <clang/Frontend/FrontendActions.h>
#include <clang/Tooling/CommonOptionsParser.h>
#include <clang/Tooling/Tooling.h>
#include <clang/ASTMatchers/ASTMatchers.h>
// Declares llvm::cl::extrahelp.
#include <llvm/Support/CommandLine.h>

#include <clang/ASTMatchers/ASTMatchers.h>
#include <clang/ASTMatchers/ASTMatchFinder.h>

#include <clang/AST/DeclCXX.h> //---

#include <cstdio>
#include <string>

#include "MethodPrinter.hpp"

using namespace clang;
using namespace clang::ast_matchers;
using namespace clang::tooling;
using namespace llvm;



int main(int argc, const char **argv)
{
    // isVirtual(): see http://clang.llvm.org/docs/LibASTMatchersReference.html
    //DeclarationMatcher methodMatcher = methodDecl(isVirtual()).bind("methods");
    DeclarationMatcher varMatcher = fieldDecl(isPublic()).bind("field_decl");

    // CommonOptionsParser declares HelpMessage with a description of the common
    // command-line options related to the compilation database and input files.
    // It's nice to have this help message in all tools.
    static cl::extrahelp CommonHelp(CommonOptionsParser::HelpMessage);

    // A help message for this specific tool can be added afterwards.
    static cl::extrahelp MoreHelp("\nMore help text...");

    cl::OptionCategory cat("myname", "mydescription");
    CommonOptionsParser optionsParser(argc, argv, cat, 0);    

    ClangTool tool(optionsParser.getCompilations(), optionsParser.getSourcePathList());

    MethodPrinter printer;
    MatchFinder finder;
    //finder.addMatcher(methodMatcher, &printer);
    finder.addMatcher(varMatcher, &printer);
    
    return tool.run(&(*newFrontendActionFactory(&finder)));
}

