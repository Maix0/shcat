/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2225.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11125(t_small_parse_table_array *v)
{
	v->a[222500] = actions(3618);
	v->a[222501] = 1;
	v->a[222502] = aux_sym_number_token2;
	v->a[222503] = actions(3622);
	v->a[222504] = 1;
	v->a[222505] = anon_sym_DOLLAR_LPAREN;
	v->a[222506] = actions(3632);
	v->a[222507] = 1;
	v->a[222508] = sym__brace_start;
	v->a[222509] = actions(8850);
	v->a[222510] = 1;
	v->a[222511] = anon_sym_DOLLAR_LBRACK;
	v->a[222512] = actions(8854);
	v->a[222513] = 1;
	v->a[222514] = anon_sym_DQUOTE;
	v->a[222515] = actions(8858);
	v->a[222516] = 1;
	v->a[222517] = anon_sym_DOLLAR_LBRACE;
	v->a[222518] = actions(8860);
	v->a[222519] = 1;
	small_parse_table_11126(v);
}

void	small_parse_table_11126(t_small_parse_table_array *v)
{
	v->a[222520] = anon_sym_BQUOTE;
	v->a[222521] = actions(8862);
	v->a[222522] = 1;
	v->a[222523] = anon_sym_DOLLAR_BQUOTE;
	v->a[222524] = actions(9516);
	v->a[222525] = 1;
	v->a[222526] = sym_word;
	v->a[222527] = actions(9524);
	v->a[222528] = 1;
	v->a[222529] = sym__comment_word;
	v->a[222530] = actions(10630);
	v->a[222531] = 1;
	v->a[222532] = anon_sym_DOLLAR;
	v->a[222533] = actions(8848);
	v->a[222534] = 2;
	v->a[222535] = anon_sym_LPAREN_LPAREN;
	v->a[222536] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[222537] = actions(8864);
	v->a[222538] = 2;
	v->a[222539] = anon_sym_LT_LPAREN;
	small_parse_table_11127(v);
}

void	small_parse_table_11127(t_small_parse_table_array *v)
{
	v->a[222540] = anon_sym_GT_LPAREN;
	v->a[222541] = actions(9520);
	v->a[222542] = 2;
	v->a[222543] = sym_test_operator;
	v->a[222544] = sym__special_character;
	v->a[222545] = actions(9522);
	v->a[222546] = 3;
	v->a[222547] = sym__bare_dollar;
	v->a[222548] = sym_raw_string;
	v->a[222549] = sym_ansi_c_string;
	v->a[222550] = state(2210);
	v->a[222551] = 9;
	v->a[222552] = sym_arithmetic_expansion;
	v->a[222553] = sym_brace_expression;
	v->a[222554] = sym_string;
	v->a[222555] = sym_translated_string;
	v->a[222556] = sym_number;
	v->a[222557] = sym_simple_expansion;
	v->a[222558] = sym_expansion;
	v->a[222559] = sym_command_substitution;
	small_parse_table_11128(v);
}

void	small_parse_table_11128(t_small_parse_table_array *v)
{
	v->a[222560] = sym_process_substitution;
	v->a[222561] = 18;
	v->a[222562] = actions(3);
	v->a[222563] = 1;
	v->a[222564] = sym_comment;
	v->a[222565] = actions(3616);
	v->a[222566] = 1;
	v->a[222567] = aux_sym_number_token1;
	v->a[222568] = actions(3618);
	v->a[222569] = 1;
	v->a[222570] = aux_sym_number_token2;
	v->a[222571] = actions(3622);
	v->a[222572] = 1;
	v->a[222573] = anon_sym_DOLLAR_LPAREN;
	v->a[222574] = actions(3632);
	v->a[222575] = 1;
	v->a[222576] = sym__brace_start;
	v->a[222577] = actions(8850);
	v->a[222578] = 1;
	v->a[222579] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_11129(v);
}

void	small_parse_table_11129(t_small_parse_table_array *v)
{
	v->a[222580] = actions(8854);
	v->a[222581] = 1;
	v->a[222582] = anon_sym_DQUOTE;
	v->a[222583] = actions(8858);
	v->a[222584] = 1;
	v->a[222585] = anon_sym_DOLLAR_LBRACE;
	v->a[222586] = actions(8860);
	v->a[222587] = 1;
	v->a[222588] = anon_sym_BQUOTE;
	v->a[222589] = actions(8862);
	v->a[222590] = 1;
	v->a[222591] = anon_sym_DOLLAR_BQUOTE;
	v->a[222592] = actions(9516);
	v->a[222593] = 1;
	v->a[222594] = sym_word;
	v->a[222595] = actions(9524);
	v->a[222596] = 1;
	v->a[222597] = sym__comment_word;
	v->a[222598] = actions(10632);
	v->a[222599] = 1;
	small_parse_table_11130(v);
}

/* EOF small_parse_table_2225.c */
