/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_577.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2885(t_small_parse_table_array *v)
{
	v->a[57700] = 2;
	v->a[57701] = anon_sym_AMP_AMP;
	v->a[57702] = anon_sym_PIPE_PIPE;
	v->a[57703] = state(1185);
	v->a[57704] = 3;
	v->a[57705] = sym_file_redirect;
	v->a[57706] = sym_heredoc_redirect;
	v->a[57707] = aux_sym_redirected_statement_repeat1;
	v->a[57708] = actions(2307);
	v->a[57709] = 7;
	v->a[57710] = anon_sym_LT;
	v->a[57711] = anon_sym_GT;
	v->a[57712] = anon_sym_GT_GT;
	v->a[57713] = anon_sym_LT_AMP;
	v->a[57714] = anon_sym_GT_AMP;
	v->a[57715] = anon_sym_GT_PIPE;
	v->a[57716] = anon_sym_LT_GT;
	v->a[57717] = 5;
	v->a[57718] = actions(407);
	v->a[57719] = 1;
	small_parse_table_2886(v);
}

void	small_parse_table_2886(t_small_parse_table_array *v)
{
	v->a[57720] = sym_comment;
	v->a[57721] = state(1131);
	v->a[57722] = 1;
	v->a[57723] = aux_sym_concatenation_repeat1;
	v->a[57724] = actions(2287);
	v->a[57725] = 2;
	v->a[57726] = sym__concat;
	v->a[57727] = aux_sym_concatenation_token1;
	v->a[57728] = actions(1025);
	v->a[57729] = 4;
	v->a[57730] = anon_sym_PIPE;
	v->a[57731] = anon_sym_LT;
	v->a[57732] = anon_sym_GT;
	v->a[57733] = anon_sym_LT_LT;
	v->a[57734] = actions(1023);
	v->a[57735] = 9;
	v->a[57736] = sym_variable_name;
	v->a[57737] = anon_sym_AMP_AMP;
	v->a[57738] = anon_sym_PIPE_PIPE;
	v->a[57739] = anon_sym_GT_GT;
	small_parse_table_2887(v);
}

void	small_parse_table_2887(t_small_parse_table_array *v)
{
	v->a[57740] = anon_sym_LT_AMP;
	v->a[57741] = anon_sym_GT_AMP;
	v->a[57742] = anon_sym_GT_PIPE;
	v->a[57743] = anon_sym_LT_GT;
	v->a[57744] = anon_sym_LT_LT_DASH;
	v->a[57745] = 10;
	v->a[57746] = actions(3);
	v->a[57747] = 1;
	v->a[57748] = sym_comment;
	v->a[57749] = actions(886);
	v->a[57750] = 1;
	v->a[57751] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57752] = actions(888);
	v->a[57753] = 1;
	v->a[57754] = anon_sym_DOLLAR;
	v->a[57755] = actions(890);
	v->a[57756] = 1;
	v->a[57757] = anon_sym_DQUOTE;
	v->a[57758] = actions(892);
	v->a[57759] = 1;
	small_parse_table_2888(v);
}

void	small_parse_table_2888(t_small_parse_table_array *v)
{
	v->a[57760] = anon_sym_DOLLAR_LBRACE;
	v->a[57761] = actions(894);
	v->a[57762] = 1;
	v->a[57763] = anon_sym_DOLLAR_LPAREN;
	v->a[57764] = actions(896);
	v->a[57765] = 1;
	v->a[57766] = anon_sym_BQUOTE;
	v->a[57767] = state(345);
	v->a[57768] = 2;
	v->a[57769] = sym_concatenation;
	v->a[57770] = aux_sym_for_statement_repeat1;
	v->a[57771] = actions(1085);
	v->a[57772] = 3;
	v->a[57773] = sym_raw_string;
	v->a[57774] = sym_number;
	v->a[57775] = sym_word;
	v->a[57776] = state(632);
	v->a[57777] = 5;
	v->a[57778] = sym_arithmetic_expansion;
	v->a[57779] = sym_string;
	small_parse_table_2889(v);
}

void	small_parse_table_2889(t_small_parse_table_array *v)
{
	v->a[57780] = sym_simple_expansion;
	v->a[57781] = sym_expansion;
	v->a[57782] = sym_command_substitution;
	v->a[57783] = 15;
	v->a[57784] = actions(3);
	v->a[57785] = 1;
	v->a[57786] = sym_comment;
	v->a[57787] = actions(1343);
	v->a[57788] = 1;
	v->a[57789] = anon_sym_DOLLAR;
	v->a[57790] = actions(1345);
	v->a[57791] = 1;
	v->a[57792] = anon_sym_DQUOTE;
	v->a[57793] = actions(1347);
	v->a[57794] = 1;
	v->a[57795] = anon_sym_DOLLAR_LBRACE;
	v->a[57796] = actions(1349);
	v->a[57797] = 1;
	v->a[57798] = anon_sym_DOLLAR_LPAREN;
	v->a[57799] = actions(1351);
	small_parse_table_2890(v);
}

/* EOF small_parse_table_577.c */
