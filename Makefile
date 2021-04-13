.PHONY: clean All

All:
	@echo "----------Building project:[ OOP - Debug ]----------"
	@cd "OOP" && "$(MAKE)" -f  "OOP.mk"
clean:
	@echo "----------Cleaning project:[ OOP - Debug ]----------"
	@cd "OOP" && "$(MAKE)" -f  "OOP.mk" clean
