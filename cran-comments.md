## Resubmission

This is a resubmission. In this version I have:

* Written software names single quotes
* Omitted the redundant "Package for" at the start of the title
* Extended the description of the package in the field description to one paragraph
* Added \value to pipe.Rd, trollsim.Rd and trollstack.Rd
* Replaced \dontrun by \donttest in troll.Rd

I have not added a reference for the method because we are waiting for CRAN acceptance 
before submitting it to Methods in Ecology and Evolution. 
But I will add a reference as soon as a paper describing the method is accepted.

I have included all the people concerned in the Authors@R field 
and included everyone as authors. 
Indeed, J. Chave, I. Maréchaux and F. Fischer developed the C++ code in src,
and S. Schmitt and G. Salzet developed the R code.

\dontrun is only used for the trollCpp, load_output, load_stack and autogif functions 
due to the use of external files or additional software.
But we have used \donttest in the troll and stack functions 
which are executable in more than 5 seconds.

The functions in the examples and vignettes do not write to the users' folders 
but only to the temporary directories.
The last chunk of the climate vignette uses the write_tsv function 
but is not evaluated and is only an example for a user who would like to save the resulting climate data.

All examples and vignettes used only one core 
except for the stack function example, and the lidar and workflow vignettes which use no more than two cores.

## Test environments 

* local, Ubuntu 20.04.5 LTS, R 3.6.3
* GitHub Actions, Ubuntu 20.04.5 LTS, R 3.6
* GitHub Actions, Ubuntu 20.04.5 LTS, R-release
* GitHub Actions, macOS latest, R-release
* R-hub builder, Windows, R-release

## R CMD check results

There were no ERRORs or WARNINGs.

There was 1 NOTE:

* checking CRAN incoming feasibility ... [11s] NOTE
    Uses the superseded package: 'doSNOW (>= 1.0.10)'
    
We use doSNOW to pass the progress bar to foreach as described in their package:
"the snow options are passed to foreach using the .options.snow argument". 
We currently have no alternative as explained here:
https://stackoverflow.com/questions/66604588/showing-progress-bar-with-doparallel-foreach.
