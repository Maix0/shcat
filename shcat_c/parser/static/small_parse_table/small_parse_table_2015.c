/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2015.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10075(t_small_parse_table_array *v)
{
	v->a[201500] = sym_brace_expression;
	v->a[201501] = sym_string;
	v->a[201502] = sym_translated_string;
	v->a[201503] = sym_number;
	v->a[201504] = sym_simple_expansion;
	v->a[201505] = sym_expansion;
	v->a[201506] = sym_command_substitution;
	v->a[201507] = sym_process_substitution;
	v->a[201508] = 20;
	v->a[201509] = actions(71);
	v->a[201510] = 1;
	v->a[201511] = sym_comment;
	v->a[201512] = actions(3612);
	v->a[201513] = 1;
	v->a[201514] = anon_sym_DOLLAR;
	v->a[201515] = actions(3616);
	v->a[201516] = 1;
	v->a[201517] = aux_sym_number_token1;
	v->a[201518] = actions(3618);
	v->a[201519] = 1;
	small_parse_table_10076(v);
}

void	small_parse_table_10076(t_small_parse_table_array *v)
{
	v->a[201520] = aux_sym_number_token2;
	v->a[201521] = actions(3622);
	v->a[201522] = 1;
	v->a[201523] = anon_sym_DOLLAR_LPAREN;
	v->a[201524] = actions(3632);
	v->a[201525] = 1;
	v->a[201526] = sym__brace_start;
	v->a[201527] = actions(4131);
	v->a[201528] = 1;
	v->a[201529] = sym_word;
	v->a[201530] = actions(4135);
	v->a[201531] = 1;
	v->a[201532] = sym_test_operator;
	v->a[201533] = actions(8850);
	v->a[201534] = 1;
	v->a[201535] = anon_sym_DOLLAR_LBRACK;
	v->a[201536] = actions(8854);
	v->a[201537] = 1;
	v->a[201538] = anon_sym_DQUOTE;
	v->a[201539] = actions(8858);
	small_parse_table_10077(v);
}

void	small_parse_table_10077(t_small_parse_table_array *v)
{
	v->a[201540] = 1;
	v->a[201541] = anon_sym_DOLLAR_LBRACE;
	v->a[201542] = actions(8860);
	v->a[201543] = 1;
	v->a[201544] = anon_sym_BQUOTE;
	v->a[201545] = actions(8862);
	v->a[201546] = 1;
	v->a[201547] = anon_sym_DOLLAR_BQUOTE;
	v->a[201548] = actions(9086);
	v->a[201549] = 1;
	v->a[201550] = sym__special_character;
	v->a[201551] = state(2270);
	v->a[201552] = 1;
	v->a[201553] = aux_sym__literal_repeat1;
	v->a[201554] = actions(8848);
	v->a[201555] = 2;
	v->a[201556] = anon_sym_LPAREN_LPAREN;
	v->a[201557] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[201558] = actions(8864);
	v->a[201559] = 2;
	small_parse_table_10078(v);
}

void	small_parse_table_10078(t_small_parse_table_array *v)
{
	v->a[201560] = anon_sym_LT_LPAREN;
	v->a[201561] = anon_sym_GT_LPAREN;
	v->a[201562] = actions(9088);
	v->a[201563] = 2;
	v->a[201564] = sym_raw_string;
	v->a[201565] = sym_ansi_c_string;
	v->a[201566] = state(788);
	v->a[201567] = 2;
	v->a[201568] = sym_concatenation;
	v->a[201569] = aux_sym_for_statement_repeat1;
	v->a[201570] = state(1968);
	v->a[201571] = 9;
	v->a[201572] = sym_arithmetic_expansion;
	v->a[201573] = sym_brace_expression;
	v->a[201574] = sym_string;
	v->a[201575] = sym_translated_string;
	v->a[201576] = sym_number;
	v->a[201577] = sym_simple_expansion;
	v->a[201578] = sym_expansion;
	v->a[201579] = sym_command_substitution;
	small_parse_table_10079(v);
}

void	small_parse_table_10079(t_small_parse_table_array *v)
{
	v->a[201580] = sym_process_substitution;
	v->a[201581] = 21;
	v->a[201582] = actions(71);
	v->a[201583] = 1;
	v->a[201584] = sym_comment;
	v->a[201585] = actions(1551);
	v->a[201586] = 1;
	v->a[201587] = anon_sym_DOLLAR;
	v->a[201588] = actions(1557);
	v->a[201589] = 1;
	v->a[201590] = aux_sym_number_token1;
	v->a[201591] = actions(1559);
	v->a[201592] = 1;
	v->a[201593] = aux_sym_number_token2;
	v->a[201594] = actions(1563);
	v->a[201595] = 1;
	v->a[201596] = anon_sym_DOLLAR_LPAREN;
	v->a[201597] = actions(1575);
	v->a[201598] = 1;
	v->a[201599] = sym__brace_start;
	small_parse_table_10080(v);
}

/* EOF small_parse_table_2015.c */
