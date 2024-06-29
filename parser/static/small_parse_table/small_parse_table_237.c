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
	v->a[23700] = 5;
	v->a[23701] = sym_arithmetic_expansion;
	v->a[23702] = sym_string;
	v->a[23703] = sym_simple_expansion;
	v->a[23704] = sym_expansion;
	v->a[23705] = sym_command_substitution;
	v->a[23706] = actions(516);
	v->a[23707] = 20;
	v->a[23708] = anon_sym_PIPE;
	v->a[23709] = anon_sym_RPAREN;
	v->a[23710] = anon_sym_SEMI_SEMI;
	v->a[23711] = anon_sym_AMP_AMP;
	v->a[23712] = anon_sym_PIPE_PIPE;
	v->a[23713] = anon_sym_LT;
	v->a[23714] = anon_sym_GT;
	v->a[23715] = anon_sym_GT_GT;
	v->a[23716] = anon_sym_AMP_GT;
	v->a[23717] = anon_sym_AMP_GT_GT;
	v->a[23718] = anon_sym_LT_AMP;
	v->a[23719] = anon_sym_GT_AMP;
	small_parse_table_1186(v);
}

void	small_parse_table_1186(t_small_parse_table_array *v)
{
	v->a[23720] = anon_sym_GT_PIPE;
	v->a[23721] = anon_sym_LT_AMP_DASH;
	v->a[23722] = anon_sym_GT_AMP_DASH;
	v->a[23723] = anon_sym_LT_LT;
	v->a[23724] = anon_sym_LT_LT_DASH;
	v->a[23725] = aux_sym_heredoc_redirect_token1;
	v->a[23726] = anon_sym_AMP;
	v->a[23727] = anon_sym_SEMI;
	v->a[23728] = 12;
	v->a[23729] = actions(3);
	v->a[23730] = 1;
	v->a[23731] = sym_comment;
	v->a[23732] = actions(764);
	v->a[23733] = 1;
	v->a[23734] = anon_sym_RPAREN;
	v->a[23735] = actions(766);
	v->a[23736] = 1;
	v->a[23737] = anon_sym_PIPE;
	v->a[23738] = actions(774);
	v->a[23739] = 1;
	small_parse_table_1187(v);
}

void	small_parse_table_1187(t_small_parse_table_array *v)
{
	v->a[23740] = sym_file_descriptor;
	v->a[23741] = actions(806);
	v->a[23742] = 1;
	v->a[23743] = sym_variable_name;
	v->a[23744] = state(740);
	v->a[23745] = 1;
	v->a[23746] = sym_terminator;
	v->a[23747] = actions(802);
	v->a[23748] = 2;
	v->a[23749] = anon_sym_AMP_AMP;
	v->a[23750] = anon_sym_PIPE_PIPE;
	v->a[23751] = actions(804);
	v->a[23752] = 2;
	v->a[23753] = anon_sym_LT_LT;
	v->a[23754] = anon_sym_LT_LT_DASH;
	v->a[23755] = state(1143);
	v->a[23756] = 2;
	v->a[23757] = sym_variable_assignment;
	v->a[23758] = aux_sym__variable_assignments_repeat1;
	v->a[23759] = state(1137);
	small_parse_table_1188(v);
}

void	small_parse_table_1188(t_small_parse_table_array *v)
{
	v->a[23760] = 3;
	v->a[23761] = sym_file_redirect;
	v->a[23762] = sym_heredoc_redirect;
	v->a[23763] = aux_sym_redirected_statement_repeat1;
	v->a[23764] = actions(800);
	v->a[23765] = 4;
	v->a[23766] = anon_sym_SEMI_SEMI;
	v->a[23767] = aux_sym_heredoc_redirect_token1;
	v->a[23768] = anon_sym_AMP;
	v->a[23769] = anon_sym_SEMI;
	v->a[23770] = actions(762);
	v->a[23771] = 19;
	v->a[23772] = anon_sym_LT;
	v->a[23773] = anon_sym_GT;
	v->a[23774] = anon_sym_GT_GT;
	v->a[23775] = anon_sym_AMP_GT;
	v->a[23776] = anon_sym_AMP_GT_GT;
	v->a[23777] = anon_sym_LT_AMP;
	v->a[23778] = anon_sym_GT_AMP;
	v->a[23779] = anon_sym_GT_PIPE;
	small_parse_table_1189(v);
}

void	small_parse_table_1189(t_small_parse_table_array *v)
{
	v->a[23780] = anon_sym_LT_AMP_DASH;
	v->a[23781] = anon_sym_GT_AMP_DASH;
	v->a[23782] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23783] = anon_sym_DOLLAR;
	v->a[23784] = anon_sym_DQUOTE;
	v->a[23785] = sym_raw_string;
	v->a[23786] = sym_number;
	v->a[23787] = anon_sym_DOLLAR_LBRACE;
	v->a[23788] = anon_sym_DOLLAR_LPAREN;
	v->a[23789] = anon_sym_BQUOTE;
	v->a[23790] = sym_word;
	v->a[23791] = 12;
	v->a[23792] = actions(3);
	v->a[23793] = 1;
	v->a[23794] = sym_comment;
	v->a[23795] = actions(766);
	v->a[23796] = 1;
	v->a[23797] = anon_sym_PIPE;
	v->a[23798] = actions(774);
	v->a[23799] = 1;
	small_parse_table_1190(v);
}

/* EOF small_parse_table_237.c */
