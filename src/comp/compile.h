extern void	 c_init		P((char*, char*, char*, char**, int));
extern object	*c_compile	P((frame*, char*, object*, string*));
extern bool	 c_upgrade	P((object**, unsigned int));
extern int	 c_autodriver	P((void));
extern void 	 c_error	();

extern bool	 c_typechecking	P((void));
extern bool	 c_inherit	P((char*, node*, int));
extern void	 c_global	P((unsigned int, unsigned int, node*));
extern void	 c_function	P((unsigned int, unsigned int, node*));
extern void	 c_funcbody	P((node*));
extern void	 c_local	P((unsigned int, unsigned int, node*));
extern bool	 c_nil		P((node*));
extern node	*c_concat	P((node*, node*));
extern node	*c_exp_stmt	P((node*));
extern node	*c_if		P((node*, node*, node*));
extern void	 c_loop		P((void));
extern node	*c_do		P((node*, node*));
extern node	*c_while	P((node*, node*));
extern node	*c_for		P((node*, node*, node*, node*));
extern void	 c_startrlimits	P((void));
extern node	*c_endrlimits	P((node*, node*, node*));
extern void	 c_startcatch	P((void));
extern void	 c_endcatch	P((void));
extern node	*c_donecatch	P((node*, node*));
extern void	 c_startswitch	P((node*, int));
extern node	*c_endswitch	P((node*, node*));
extern node	*c_case		P((node*, node*));
extern node	*c_default	P((void));
extern node	*c_break	P((void));
extern node	*c_continue	P((void));
extern node	*c_return	P((node*, int));
extern void	 c_startcompound P((void));
extern node	*c_endcompound	P((node*));
extern node	*c_flookup	P((node*, int));
extern node	*c_iflookup	P((node*, node*));
extern node	*c_aggregate	P((node*, unsigned int));
extern node	*c_variable	P((node*));
extern short	 c_vtype	P((int));
extern node	*c_funcall	P((node*, node*));
extern node	*c_arrow	P((node*, node*, node*));
extern node	*c_checkcall	P((node*, int));
extern node	*c_tst		P((node*));
extern node	*c_not		P((node*));
extern node	*c_lvalue	P((node*, char*));
extern unsigned short c_tmatch	P((unsigned int, unsigned int));
