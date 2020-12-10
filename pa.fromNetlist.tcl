
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name sevenSegmentDisplay -dir "C:/Users/nino/Desktop/TsotneLab/470labhw7-7segment_display/sevenSegmentDisplay/planAhead_run_3" -part xc3s100ecp132-4
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/nino/Desktop/TsotneLab/470labhw7-7segment_display/sevenSegmentDisplay/top.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/nino/Desktop/TsotneLab/470labhw7-7segment_display/sevenSegmentDisplay} }
set_property target_constrs_file "constraints.ucf" [current_fileset -constrset]
add_files [list {constraints.ucf}] -fileset [get_property constrset [current_run]]
link_design
