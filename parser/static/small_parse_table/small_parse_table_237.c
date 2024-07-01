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
	v->a[23700] = anon_sym_SEMI_SEMI;
	v->a[23701] = anon_sym_AMP_AMP;
	v->a[23702] = anon_sym_PIPE_PIPE;
	v->a[23703] = anon_sym_LT;
	v->a[23704] = anon_sym_GT;
	v->a[23705] = anon_sym_GT_GT;
	v->a[23706] = anon_sym_LT_AMP;
	v->a[23707] = anon_sym_GT_AMP;
	v->a[23708] = anon_sym_GT_PIPE;
	v->a[23709] = anon_sym_LT_GT;
	v->a[23710] = anon_sym_LT_LT;
	v->a[23711] = anon_sym_LT_LT_DASH;
	v->a[23712] = aux_sym_heredoc_redirect_token1;
	v->a[23713] = anon_sym_AMP;
	v->a[23714] = anon_sym_BQUOTE;
	v->a[23715] = anon_sym_SEMI;
	v->a[23716] = 12;
	v->a[23717] = actions(3);
	v->a[23718] = 1;
	v->a[23719] = sym_comment;
	small_parse_table_1186(v);
}

void	small_parse_table_1186(t_small_parse_table_array *v)
{
	v->a[23720] = actions(621);
	v->a[23721] = 1;
	v->a[23722] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23723] = actions(624);
	v->a[23724] = 1;
	v->a[23725] = anon_sym_DOLLAR;
	v->a[23726] = actions(627);
	v->a[23727] = 1;
	v->a[23728] = anon_sym_DQUOTE;
	v->a[23729] = actions(630);
	v->a[23730] = 1;
	v->a[23731] = anon_sym_DOLLAR_LBRACE;
	v->a[23732] = actions(633);
	v->a[23733] = 1;
	v->a[23734] = anon_sym_DOLLAR_LPAREN;
	v->a[23735] = actions(636);
	v->a[23736] = 1;
	v->a[23737] = anon_sym_BQUOTE;
	v->a[23738] = actions(499);
	v->a[23739] = 2;
	small_parse_table_1187(v);
}

void	small_parse_table_1187(t_small_parse_table_array *v)
{
	v->a[23740] = sym_file_descriptor;
	v->a[23741] = sym_variable_name;
	v->a[23742] = state(257);
	v->a[23743] = 2;
	v->a[23744] = sym_concatenation;
	v->a[23745] = aux_sym_for_statement_repeat1;
	v->a[23746] = actions(901);
	v->a[23747] = 3;
	v->a[23748] = sym_raw_string;
	v->a[23749] = sym_number;
	v->a[23750] = sym_word;
	v->a[23751] = state(459);
	v->a[23752] = 5;
	v->a[23753] = sym_arithmetic_expansion;
	v->a[23754] = sym_string;
	v->a[23755] = sym_simple_expansion;
	v->a[23756] = sym_expansion;
	v->a[23757] = sym_command_substitution;
	v->a[23758] = actions(504);
	v->a[23759] = 16;
	small_parse_table_1188(v);
}

void	small_parse_table_1188(t_small_parse_table_array *v)
{
	v->a[23760] = anon_sym_PIPE;
	v->a[23761] = anon_sym_SEMI_SEMI;
	v->a[23762] = anon_sym_AMP_AMP;
	v->a[23763] = anon_sym_PIPE_PIPE;
	v->a[23764] = anon_sym_LT;
	v->a[23765] = anon_sym_GT;
	v->a[23766] = anon_sym_GT_GT;
	v->a[23767] = anon_sym_LT_AMP;
	v->a[23768] = anon_sym_GT_AMP;
	v->a[23769] = anon_sym_GT_PIPE;
	v->a[23770] = anon_sym_LT_GT;
	v->a[23771] = anon_sym_LT_LT;
	v->a[23772] = anon_sym_LT_LT_DASH;
	v->a[23773] = aux_sym_heredoc_redirect_token1;
	v->a[23774] = anon_sym_AMP;
	v->a[23775] = anon_sym_SEMI;
	v->a[23776] = 12;
	v->a[23777] = actions(3);
	v->a[23778] = 1;
	v->a[23779] = sym_comment;
	small_parse_table_1189(v);
}

void	small_parse_table_1189(t_small_parse_table_array *v)
{
	v->a[23780] = actions(736);
	v->a[23781] = 1;
	v->a[23782] = anon_sym_PIPE;
	v->a[23783] = actions(746);
	v->a[23784] = 1;
	v->a[23785] = sym_file_descriptor;
	v->a[23786] = actions(810);
	v->a[23787] = 1;
	v->a[23788] = sym_variable_name;
	v->a[23789] = actions(904);
	v->a[23790] = 1;
	v->a[23791] = ts_builtin_sym_end;
	v->a[23792] = state(756);
	v->a[23793] = 1;
	v->a[23794] = sym_terminator;
	v->a[23795] = actions(744);
	v->a[23796] = 2;
	v->a[23797] = anon_sym_LT_LT;
	v->a[23798] = anon_sym_LT_LT_DASH;
	v->a[23799] = actions(808);
	small_parse_table_1190(v);
}

/* EOF small_parse_table_237.c */
