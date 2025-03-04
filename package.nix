{ pkgs ? import <nixpkgs> {}, displayrUtils }:

pkgs.rPackages.buildRPackage {
  name = "ggrepel";
  version = displayrUtils.extractRVersion (builtins.readFile ./DESCRIPTION); 
  src = ./.;
  description = ''
    Provides text and label geoms for 'ggplot2' that help to avoid overlapping
    text labels. Labels repel away from each other and away from the data
    points.'';
  propagatedBuildInputs = with pkgs.rPackages; [ 
    scales
    ggplot2
    Rcpp
 ];

}
