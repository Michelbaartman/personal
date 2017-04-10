##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=legobots
ConfigurationName      :=Debug
WorkspacePath          :=D:/git/personal/huiswerk/ADC
ProjectPath            :=D:/git/personal/huiswerk/ADC/legobots
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Baartman
Date                   :=10/04/2017
CodeLitePath           :="C:/Program Files (x86)/CodeLite"
LinkerName             :=C:/TDM-GCC-32/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-32/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="legobots.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-32/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/TDM-GCC-32/bin/ar.exe rcu
CXX      := C:/TDM-GCC-32/bin/g++.exe
CC       := C:/TDM-GCC-32/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-32/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files (x86)\CodeLite
Objects0=$(IntermediateDirectory)/main_v5.c$(ObjectSuffix) $(IntermediateDirectory)/bluetooth.c$(ObjectSuffix) $(IntermediateDirectory)/drawing.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main_v5.c$(ObjectSuffix): main_v5.c $(IntermediateDirectory)/main_v5.c$(DependSuffix)
	$(CC) $(SourceSwitch) "D:/git/personal/huiswerk/ADC/legobots/main_v5.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main_v5.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main_v5.c$(DependSuffix): main_v5.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main_v5.c$(ObjectSuffix) -MF$(IntermediateDirectory)/main_v5.c$(DependSuffix) -MM main_v5.c

$(IntermediateDirectory)/main_v5.c$(PreprocessSuffix): main_v5.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main_v5.c$(PreprocessSuffix) main_v5.c

$(IntermediateDirectory)/bluetooth.c$(ObjectSuffix): bluetooth.c $(IntermediateDirectory)/bluetooth.c$(DependSuffix)
	$(CC) $(SourceSwitch) "D:/git/personal/huiswerk/ADC/legobots/bluetooth.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/bluetooth.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/bluetooth.c$(DependSuffix): bluetooth.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/bluetooth.c$(ObjectSuffix) -MF$(IntermediateDirectory)/bluetooth.c$(DependSuffix) -MM bluetooth.c

$(IntermediateDirectory)/bluetooth.c$(PreprocessSuffix): bluetooth.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/bluetooth.c$(PreprocessSuffix) bluetooth.c

$(IntermediateDirectory)/drawing.c$(ObjectSuffix): drawing.c $(IntermediateDirectory)/drawing.c$(DependSuffix)
	$(CC) $(SourceSwitch) "D:/git/personal/huiswerk/ADC/legobots/drawing.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/drawing.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/drawing.c$(DependSuffix): drawing.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/drawing.c$(ObjectSuffix) -MF$(IntermediateDirectory)/drawing.c$(DependSuffix) -MM drawing.c

$(IntermediateDirectory)/drawing.c$(PreprocessSuffix): drawing.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/drawing.c$(PreprocessSuffix) drawing.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


