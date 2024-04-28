/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2120.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10600(t_small_parse_table_array *v)
{
	v->a[212000] = sym__special_character;
	v->a[212001] = actions(10066);
	v->a[212002] = 1;
	v->a[212003] = anon_sym_DQUOTE;
	v->a[212004] = actions(10070);
	v->a[212005] = 1;
	v->a[212006] = anon_sym_DOLLAR_LBRACE;
	v->a[212007] = actions(10072);
	v->a[212008] = 1;
	v->a[212009] = anon_sym_BQUOTE;
	v->a[212010] = actions(10074);
	v->a[212011] = 1;
	v->a[212012] = anon_sym_DOLLAR_BQUOTE;
	v->a[212013] = actions(10078);
	v->a[212014] = 1;
	v->a[212015] = sym_test_operator;
	v->a[212016] = state(4645);
	v->a[212017] = 1;
	v->a[212018] = aux_sym__literal_repeat1;
	v->a[212019] = state(5086);
	small_parse_table_10601(v);
}

void	small_parse_table_10601(t_small_parse_table_array *v)
{
	v->a[212020] = 1;
	v->a[212021] = sym_concatenation;
	v->a[212022] = actions(10060);
	v->a[212023] = 2;
	v->a[212024] = anon_sym_LPAREN_LPAREN;
	v->a[212025] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[212026] = actions(10068);
	v->a[212027] = 2;
	v->a[212028] = sym_raw_string;
	v->a[212029] = sym_ansi_c_string;
	v->a[212030] = actions(10076);
	v->a[212031] = 2;
	v->a[212032] = anon_sym_LT_LPAREN;
	v->a[212033] = anon_sym_GT_LPAREN;
	v->a[212034] = state(4430);
	v->a[212035] = 9;
	v->a[212036] = sym_arithmetic_expansion;
	v->a[212037] = sym_brace_expression;
	v->a[212038] = sym_string;
	v->a[212039] = sym_translated_string;
	small_parse_table_10602(v);
}

void	small_parse_table_10602(t_small_parse_table_array *v)
{
	v->a[212040] = sym_number;
	v->a[212041] = sym_simple_expansion;
	v->a[212042] = sym_expansion;
	v->a[212043] = sym_command_substitution;
	v->a[212044] = sym_process_substitution;
	v->a[212045] = 18;
	v->a[212046] = actions(3);
	v->a[212047] = 1;
	v->a[212048] = sym_comment;
	v->a[212049] = actions(3612);
	v->a[212050] = 1;
	v->a[212051] = anon_sym_DOLLAR;
	v->a[212052] = actions(3616);
	v->a[212053] = 1;
	v->a[212054] = aux_sym_number_token1;
	v->a[212055] = actions(3618);
	v->a[212056] = 1;
	v->a[212057] = aux_sym_number_token2;
	v->a[212058] = actions(3622);
	v->a[212059] = 1;
	small_parse_table_10603(v);
}

void	small_parse_table_10603(t_small_parse_table_array *v)
{
	v->a[212060] = anon_sym_DOLLAR_LPAREN;
	v->a[212061] = actions(3632);
	v->a[212062] = 1;
	v->a[212063] = sym__brace_start;
	v->a[212064] = actions(8850);
	v->a[212065] = 1;
	v->a[212066] = anon_sym_DOLLAR_LBRACK;
	v->a[212067] = actions(8854);
	v->a[212068] = 1;
	v->a[212069] = anon_sym_DQUOTE;
	v->a[212070] = actions(8858);
	v->a[212071] = 1;
	v->a[212072] = anon_sym_DOLLAR_LBRACE;
	v->a[212073] = actions(8860);
	v->a[212074] = 1;
	v->a[212075] = anon_sym_BQUOTE;
	v->a[212076] = actions(8862);
	v->a[212077] = 1;
	v->a[212078] = anon_sym_DOLLAR_BQUOTE;
	v->a[212079] = actions(9516);
	small_parse_table_10604(v);
}

void	small_parse_table_10604(t_small_parse_table_array *v)
{
	v->a[212080] = 1;
	v->a[212081] = sym_word;
	v->a[212082] = actions(9524);
	v->a[212083] = 1;
	v->a[212084] = sym__comment_word;
	v->a[212085] = actions(8848);
	v->a[212086] = 2;
	v->a[212087] = anon_sym_LPAREN_LPAREN;
	v->a[212088] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[212089] = actions(8864);
	v->a[212090] = 2;
	v->a[212091] = anon_sym_LT_LPAREN;
	v->a[212092] = anon_sym_GT_LPAREN;
	v->a[212093] = actions(9520);
	v->a[212094] = 2;
	v->a[212095] = sym_test_operator;
	v->a[212096] = sym__special_character;
	v->a[212097] = actions(9522);
	v->a[212098] = 3;
	v->a[212099] = sym__bare_dollar;
	small_parse_table_10605(v);
}

/* EOF small_parse_table_2120.c */
