/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_237.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1185(t_small_parse_table_array *v)
{
	v->a[23700] = 1;
	v->a[23701] = sym__bare_dollar;
	v->a[23702] = actions(547);
	v->a[23703] = 1;
	v->a[23704] = sym_file_descriptor;
	v->a[23705] = state(224);
	v->a[23706] = 1;
	v->a[23707] = aux_sym_command_repeat2;
	v->a[23708] = state(729);
	v->a[23709] = 1;
	v->a[23710] = sym_concatenation;
	v->a[23711] = actions(511);
	v->a[23712] = 3;
	v->a[23713] = sym_raw_string;
	v->a[23714] = sym_number;
	v->a[23715] = sym_word;
	v->a[23716] = state(519);
	v->a[23717] = 5;
	v->a[23718] = sym_arithmetic_expansion;
	v->a[23719] = sym_string;
	small_parse_table_1186(v);
}

void	small_parse_table_1186(t_small_parse_table_array *v)
{
	v->a[23720] = sym_simple_expansion;
	v->a[23721] = sym_expansion;
	v->a[23722] = sym_command_substitution;
	v->a[23723] = actions(545);
	v->a[23724] = 20;
	v->a[23725] = anon_sym_PIPE;
	v->a[23726] = anon_sym_SEMI_SEMI;
	v->a[23727] = anon_sym_AMP_AMP;
	v->a[23728] = anon_sym_PIPE_PIPE;
	v->a[23729] = anon_sym_LT;
	v->a[23730] = anon_sym_GT;
	v->a[23731] = anon_sym_GT_GT;
	v->a[23732] = anon_sym_AMP_GT;
	v->a[23733] = anon_sym_AMP_GT_GT;
	v->a[23734] = anon_sym_LT_AMP;
	v->a[23735] = anon_sym_GT_AMP;
	v->a[23736] = anon_sym_GT_PIPE;
	v->a[23737] = anon_sym_LT_AMP_DASH;
	v->a[23738] = anon_sym_GT_AMP_DASH;
	v->a[23739] = anon_sym_LT_LT;
	small_parse_table_1187(v);
}

void	small_parse_table_1187(t_small_parse_table_array *v)
{
	v->a[23740] = anon_sym_LT_LT_DASH;
	v->a[23741] = aux_sym_heredoc_redirect_token1;
	v->a[23742] = anon_sym_AMP;
	v->a[23743] = anon_sym_BQUOTE;
	v->a[23744] = anon_sym_SEMI;
	v->a[23745] = 5;
	v->a[23746] = actions(3);
	v->a[23747] = 1;
	v->a[23748] = sym_comment;
	v->a[23749] = actions(608);
	v->a[23750] = 2;
	v->a[23751] = sym_file_descriptor;
	v->a[23752] = sym_variable_name;
	v->a[23753] = state(225);
	v->a[23754] = 2;
	v->a[23755] = sym_concatenation;
	v->a[23756] = aux_sym_for_statement_repeat1;
	v->a[23757] = state(499);
	v->a[23758] = 5;
	v->a[23759] = sym_arithmetic_expansion;
	small_parse_table_1188(v);
}

void	small_parse_table_1188(t_small_parse_table_array *v)
{
	v->a[23760] = sym_string;
	v->a[23761] = sym_simple_expansion;
	v->a[23762] = sym_expansion;
	v->a[23763] = sym_command_substitution;
	v->a[23764] = actions(610);
	v->a[23765] = 28;
	v->a[23766] = anon_sym_PIPE;
	v->a[23767] = anon_sym_SEMI_SEMI;
	v->a[23768] = anon_sym_AMP_AMP;
	v->a[23769] = anon_sym_PIPE_PIPE;
	v->a[23770] = anon_sym_LT;
	v->a[23771] = anon_sym_GT;
	v->a[23772] = anon_sym_GT_GT;
	v->a[23773] = anon_sym_AMP_GT;
	v->a[23774] = anon_sym_AMP_GT_GT;
	v->a[23775] = anon_sym_LT_AMP;
	v->a[23776] = anon_sym_GT_AMP;
	v->a[23777] = anon_sym_GT_PIPE;
	v->a[23778] = anon_sym_LT_AMP_DASH;
	v->a[23779] = anon_sym_GT_AMP_DASH;
	small_parse_table_1189(v);
}

void	small_parse_table_1189(t_small_parse_table_array *v)
{
	v->a[23780] = anon_sym_LT_LT;
	v->a[23781] = anon_sym_LT_LT_DASH;
	v->a[23782] = aux_sym_heredoc_redirect_token1;
	v->a[23783] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23784] = anon_sym_AMP;
	v->a[23785] = anon_sym_DOLLAR;
	v->a[23786] = anon_sym_DQUOTE;
	v->a[23787] = sym_raw_string;
	v->a[23788] = sym_number;
	v->a[23789] = anon_sym_DOLLAR_LBRACE;
	v->a[23790] = anon_sym_DOLLAR_LPAREN;
	v->a[23791] = anon_sym_BQUOTE;
	v->a[23792] = sym_word;
	v->a[23793] = anon_sym_SEMI;
	v->a[23794] = 14;
	v->a[23795] = actions(3);
	v->a[23796] = 1;
	v->a[23797] = sym_comment;
	v->a[23798] = actions(497);
	v->a[23799] = 1;
	small_parse_table_1190(v);
}

/* EOF small_parse_table_237.c */
