/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_7.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_35(t_small_parse_table_array *v)
{
	v->a[700] = anon_sym_GT_GT;
	v->a[701] = anon_sym_RPAREN;
	v->a[702] = anon_sym_SEMI_SEMI;
	v->a[703] = anon_sym_PIPE_AMP;
	v->a[704] = anon_sym_AMP_GT;
	v->a[705] = anon_sym_AMP_GT_GT;
	v->a[706] = anon_sym_LT_AMP;
	v->a[707] = anon_sym_GT_AMP;
	v->a[708] = anon_sym_GT_PIPE;
	v->a[709] = anon_sym_LT_AMP_DASH;
	v->a[710] = anon_sym_GT_AMP_DASH;
	v->a[711] = anon_sym_LT_LT_DASH;
	v->a[712] = 28;
	v->a[713] = actions(3);
	v->a[714] = 1;
	v->a[715] = sym_comment;
	v->a[716] = actions(19);
	v->a[717] = 1;
	v->a[718] = anon_sym_LPAREN;
	v->a[719] = actions(1583);
	small_parse_table_36(v);
}

void	small_parse_table_36(t_small_parse_table_array *v)
{
	v->a[720] = 1;
	v->a[721] = anon_sym_LT_LT_LT;
	v->a[722] = actions(1585);
	v->a[723] = 1;
	v->a[724] = anon_sym_DOLLAR_LBRACK;
	v->a[725] = actions(1587);
	v->a[726] = 1;
	v->a[727] = anon_sym_DOLLAR;
	v->a[728] = actions(1589);
	v->a[729] = 1;
	v->a[730] = sym__special_character;
	v->a[731] = actions(1591);
	v->a[732] = 1;
	v->a[733] = anon_sym_DQUOTE;
	v->a[734] = actions(1593);
	v->a[735] = 1;
	v->a[736] = aux_sym_number_token1;
	v->a[737] = actions(1595);
	v->a[738] = 1;
	v->a[739] = aux_sym_number_token2;
	small_parse_table_37(v);
}

void	small_parse_table_37(t_small_parse_table_array *v)
{
	v->a[740] = actions(1597);
	v->a[741] = 1;
	v->a[742] = anon_sym_DOLLAR_LBRACE;
	v->a[743] = actions(1599);
	v->a[744] = 1;
	v->a[745] = anon_sym_DOLLAR_LPAREN;
	v->a[746] = actions(1601);
	v->a[747] = 1;
	v->a[748] = anon_sym_BQUOTE;
	v->a[749] = actions(1603);
	v->a[750] = 1;
	v->a[751] = anon_sym_DOLLAR_BQUOTE;
	v->a[752] = actions(1607);
	v->a[753] = 1;
	v->a[754] = sym_test_operator;
	v->a[755] = actions(1609);
	v->a[756] = 1;
	v->a[757] = sym__bare_dollar;
	v->a[758] = actions(1611);
	v->a[759] = 1;
	small_parse_table_38(v);
}

void	small_parse_table_38(t_small_parse_table_array *v)
{
	v->a[760] = sym__brace_start;
	v->a[761] = state(557);
	v->a[762] = 1;
	v->a[763] = aux_sym_command_repeat2;
	v->a[764] = state(1431);
	v->a[765] = 1;
	v->a[766] = aux_sym__literal_repeat1;
	v->a[767] = state(1521);
	v->a[768] = 1;
	v->a[769] = sym_concatenation;
	v->a[770] = state(1552);
	v->a[771] = 1;
	v->a[772] = sym_herestring_redirect;
	v->a[773] = state(4911);
	v->a[774] = 1;
	v->a[775] = sym_subshell;
	v->a[776] = actions(1579);
	v->a[777] = 2;
	v->a[778] = anon_sym_LPAREN_LPAREN;
	v->a[779] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_39(v);
}

void	small_parse_table_39(t_small_parse_table_array *v)
{
	v->a[780] = actions(1581);
	v->a[781] = 2;
	v->a[782] = anon_sym_EQ_EQ;
	v->a[783] = anon_sym_EQ_TILDE;
	v->a[784] = actions(1605);
	v->a[785] = 2;
	v->a[786] = anon_sym_LT_LPAREN;
	v->a[787] = anon_sym_GT_LPAREN;
	v->a[788] = actions(1408);
	v->a[789] = 3;
	v->a[790] = sym_file_descriptor;
	v->a[791] = ts_builtin_sym_end;
	v->a[792] = aux_sym_heredoc_redirect_token1;
	v->a[793] = actions(1577);
	v->a[794] = 3;
	v->a[795] = sym_raw_string;
	v->a[796] = sym_ansi_c_string;
	v->a[797] = sym_word;
	v->a[798] = state(1093);
	v->a[799] = 9;
	small_parse_table_40(v);
}

/* EOF small_parse_table_7.c */
