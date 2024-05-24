{
  description = "Flake utils demo";

  inputs.flake-utils.url = "github:numtide/flake-utils";
  inputs.generic_c.url = "github:Maix0/generic_c";

  outputs = {
    self,
    nixpkgs,
    flake-utils,
    generic_c,
  }:
    flake-utils.lib.eachDefaultSystem (
      system: let
        pkgs = nixpkgs.legacyPackages.${system};
      in {
        devShell = pkgs.mkShell {
          packages = with pkgs; [
            valgrind.dev
            clang
            valgrind
            gnumake
            readline.out
            readline.dev
            generic_c.packages.${system}.default
            llvmPackages.bintools
            norminette
          ];
          VALGRIND_INC_OPT = "${pkgs.valgrind.dev}/include";
          ASAN_OPTIONS = "strict_string_checks=1:detect_stack_use_after_return=1:check_initialization_order=1:strict_init_order=1";
        };
      }
    );
}
