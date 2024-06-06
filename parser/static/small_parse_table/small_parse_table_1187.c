/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1187.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5935(t_small_parse_table_array *v)
{
	v->a[118700] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[118701] = actions(5816);
	v->a[118702] = 1;
	v->a[118703] = anon_sym_DOLLAR;
	v->a[118704] = actions(5820);
	v->a[118705] = 1;
	v->a[118706] = anon_sym_DQUOTE;
	v->a[118707] = actions(5824);
	v->a[118708] = 1;
	v->a[118709] = aux_sym_number_token1;
	v->a[118710] = actions(5826);
	v->a[118711] = 1;
	v->a[118712] = aux_sym_number_token2;
	v->a[118713] = actions(5828);
	v->a[118714] = 1;
	v->a[118715] = anon_sym_DOLLAR_LBRACE;
	v->a[118716] = actions(5830);
	v->a[118717] = 1;
	v->a[118718] = anon_sym_DOLLAR_LPAREN;
	v->a[118719] = actions(5832);
	small_parse_table_5936(v);
}

void	small_parse_table_5936(t_small_parse_table_array *v)
{
	v->a[118720] = 1;
	v->a[118721] = anon_sym_BQUOTE;
	v->a[118722] = actions(5834);
	v->a[118723] = 1;
	v->a[118724] = anon_sym_DOLLAR_BQUOTE;
	v->a[118725] = actions(5840);
	v->a[118726] = 1;
	v->a[118727] = sym__brace_start;
	v->a[118728] = actions(6651);
	v->a[118729] = 1;
	v->a[118730] = sym_word;
	v->a[118731] = actions(6655);
	v->a[118732] = 1;
	v->a[118733] = sym__special_character;
	v->a[118734] = actions(6659);
	v->a[118735] = 1;
	v->a[118736] = sym__comment_word;
	v->a[118737] = actions(6657);
	v->a[118738] = 3;
	v->a[118739] = sym_test_operator;
	small_parse_table_5937(v);
}

void	small_parse_table_5937(t_small_parse_table_array *v)
{
	v->a[118740] = sym__bare_dollar;
	v->a[118741] = sym_raw_string;
	v->a[118742] = state(1532);
	v->a[118743] = 7;
	v->a[118744] = sym_arithmetic_expansion;
	v->a[118745] = sym_brace_expression;
	v->a[118746] = sym_string;
	v->a[118747] = sym_number;
	v->a[118748] = sym_simple_expansion;
	v->a[118749] = sym_expansion;
	v->a[118750] = sym_command_substitution;
	v->a[118751] = 10;
	v->a[118752] = actions(3);
	v->a[118753] = 1;
	v->a[118754] = sym_comment;
	v->a[118755] = actions(2939);
	v->a[118756] = 1;
	v->a[118757] = ts_builtin_sym_end;
	v->a[118758] = actions(2947);
	v->a[118759] = 1;
	small_parse_table_5938(v);
}

void	small_parse_table_5938(t_small_parse_table_array *v)
{
	v->a[118760] = aux_sym_heredoc_redirect_token1;
	v->a[118761] = actions(5604);
	v->a[118762] = 1;
	v->a[118763] = sym_file_descriptor;
	v->a[118764] = actions(2943);
	v->a[118765] = 2;
	v->a[118766] = anon_sym_AMP_AMP;
	v->a[118767] = anon_sym_PIPE_PIPE;
	v->a[118768] = actions(2945);
	v->a[118769] = 2;
	v->a[118770] = anon_sym_LT_LT;
	v->a[118771] = anon_sym_LT_LT_DASH;
	v->a[118772] = actions(5602);
	v->a[118773] = 2;
	v->a[118774] = anon_sym_LT_AMP_DASH;
	v->a[118775] = anon_sym_GT_AMP_DASH;
	v->a[118776] = actions(2941);
	v->a[118777] = 3;
	v->a[118778] = anon_sym_SEMI_SEMI;
	v->a[118779] = anon_sym_AMP;
	small_parse_table_5939(v);
}

void	small_parse_table_5939(t_small_parse_table_array *v)
{
	v->a[118780] = anon_sym_SEMI;
	v->a[118781] = state(2129);
	v->a[118782] = 3;
	v->a[118783] = sym_file_redirect;
	v->a[118784] = sym_heredoc_redirect;
	v->a[118785] = aux_sym_redirected_statement_repeat1;
	v->a[118786] = actions(5600);
	v->a[118787] = 8;
	v->a[118788] = anon_sym_LT;
	v->a[118789] = anon_sym_GT;
	v->a[118790] = anon_sym_GT_GT;
	v->a[118791] = anon_sym_AMP_GT;
	v->a[118792] = anon_sym_AMP_GT_GT;
	v->a[118793] = anon_sym_LT_AMP;
	v->a[118794] = anon_sym_GT_AMP;
	v->a[118795] = anon_sym_GT_PIPE;
	v->a[118796] = 10;
	v->a[118797] = actions(3);
	v->a[118798] = 1;
	v->a[118799] = sym_comment;
	small_parse_table_5940(v);
}

/* EOF small_parse_table_1187.c */
