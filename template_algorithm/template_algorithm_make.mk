#=======================================================================================#
# template_algorithm_makefile.mk
#=======================================================================================#
#  Created on: Oct 3, 2015
#      Author: puch
#=======================================================================================#

#=======================================================================================#
# DEFINE PACKAGE RULE
#=======================================================================================#
define $(_build_)_$(_curr_)_MAKE
#=======================================================================================#
# OBJECTS DIRECTORY
# e.g: 
#     $(_build_)_$(_curr_)_src_dir=pk_module_N_code/_src
#     or
#     $(_build_)_$(_curr_)_src_dir=_src
#=======================================================================================#
$(_build_)_$(_curr_)_inc=calgorithm.h calgorithm.c

#=======================================================================================#
# END PACKAGE RULE
#=======================================================================================#
endef
#=======================================================================================#
# LOCAL VARIABLES
#=======================================================================================#

#=======================================================================================#
# LOCAL DEFINES 
#=======================================================================================#

#=======================================================================================#
# LOCAL DEFINE EXPANSIONS
#=======================================================================================#

#=======================================================================================#
# LOCAL RULES EXPANSIONS
#=======================================================================================#

#=======================================================================================#
# INCLUDE PK PROJECT UTILITY
#=======================================================================================#
include $(PROJ_MAK_DIR)/project.mk
#=======================================================================================#
# template_algorithm_makefile.mk
#=======================================================================================#
# Changes Log
#
#
#=======================================================================================#
