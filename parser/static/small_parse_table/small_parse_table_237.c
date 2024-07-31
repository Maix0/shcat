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
	v->a[23700] = sym_arithmetic_expansion;
	v->a[23701] = sym_string;
	v->a[23702] = sym_simple_expansion;
	v->a[23703] = sym_expansion;
	v->a[23704] = sym_command_substitution;
	v->a[23705] = actions(487);
	v->a[23706] = 16;
	v->a[23707] = anon_sym_PIPE;
	v->a[23708] = anon_sym_RPAREN;
	v->a[23709] = anon_sym_SEMI_SEMI;
	v->a[23710] = anon_sym_AMP_AMP;
	v->a[23711] = anon_sym_PIPE_PIPE;
	v->a[23712] = anon_sym_LT;
	v->a[23713] = anon_sym_GT;
	v->a[23714] = anon_sym_GT_GT;
	v->a[23715] = anon_sym_LT_AMP;
	v->a[23716] = anon_sym_GT_AMP;
	v->a[23717] = anon_sym_GT_PIPE;
	v->a[23718] = anon_sym_LT_GT;
	v->a[23719] = anon_sym_LT_LT;
	small_parse_table_1186(v);
}

void	small_parse_table_1186(t_small_parse_table_array *v)
{
	v->a[23720] = anon_sym_LT_LT_DASH;
	v->a[23721] = aux_sym_heredoc_redirect_token1;
	v->a[23722] = anon_sym_SEMI;
	v->a[23723] = 10;
	v->a[23724] = actions(3);
	v->a[23725] = 1;
	v->a[23726] = sym_comment;
	v->a[23727] = actions(746);
	v->a[23728] = 1;
	v->a[23729] = anon_sym_PIPE;
	v->a[23730] = actions(900);
	v->a[23731] = 1;
	v->a[23732] = sym_variable_name;
	v->a[23733] = state(634);
	v->a[23734] = 1;
	v->a[23735] = sym_terminator;
	v->a[23736] = actions(850);
	v->a[23737] = 2;
	v->a[23738] = anon_sym_LT_LT;
	v->a[23739] = anon_sym_LT_LT_DASH;
	small_parse_table_1187(v);
}

void	small_parse_table_1187(t_small_parse_table_array *v)
{
	v->a[23740] = actions(898);
	v->a[23741] = 2;
	v->a[23742] = anon_sym_AMP_AMP;
	v->a[23743] = anon_sym_PIPE_PIPE;
	v->a[23744] = state(1002);
	v->a[23745] = 2;
	v->a[23746] = sym_variable_assignment;
	v->a[23747] = aux_sym__variable_assignments_repeat1;
	v->a[23748] = actions(858);
	v->a[23749] = 3;
	v->a[23750] = anon_sym_SEMI_SEMI;
	v->a[23751] = aux_sym_heredoc_redirect_token1;
	v->a[23752] = anon_sym_SEMI;
	v->a[23753] = state(984);
	v->a[23754] = 3;
	v->a[23755] = sym_file_redirect;
	v->a[23756] = sym_heredoc_redirect;
	v->a[23757] = aux_sym_redirected_statement_repeat1;
	v->a[23758] = actions(742);
	v->a[23759] = 16;
	small_parse_table_1188(v);
}

void	small_parse_table_1188(t_small_parse_table_array *v)
{
	v->a[23760] = anon_sym_LT;
	v->a[23761] = anon_sym_GT;
	v->a[23762] = anon_sym_GT_GT;
	v->a[23763] = anon_sym_LT_AMP;
	v->a[23764] = anon_sym_GT_AMP;
	v->a[23765] = anon_sym_GT_PIPE;
	v->a[23766] = anon_sym_LT_GT;
	v->a[23767] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23768] = anon_sym_DOLLAR;
	v->a[23769] = anon_sym_DQUOTE;
	v->a[23770] = sym_raw_string;
	v->a[23771] = sym_number;
	v->a[23772] = anon_sym_DOLLAR_LBRACE;
	v->a[23773] = anon_sym_DOLLAR_LPAREN;
	v->a[23774] = anon_sym_BQUOTE;
	v->a[23775] = sym_word;
	v->a[23776] = 5;
	v->a[23777] = actions(3);
	v->a[23778] = 1;
	v->a[23779] = sym_comment;
	small_parse_table_1189(v);
}

void	small_parse_table_1189(t_small_parse_table_array *v)
{
	v->a[23780] = actions(907);
	v->a[23781] = 1;
	v->a[23782] = sym_variable_name;
	v->a[23783] = actions(905);
	v->a[23784] = 2;
	v->a[23785] = aux_sym__simple_variable_name_token1;
	v->a[23786] = aux_sym__multiline_variable_name_token1;
	v->a[23787] = actions(903);
	v->a[23788] = 8;
	v->a[23789] = anon_sym_BANG;
	v->a[23790] = anon_sym_DASH;
	v->a[23791] = anon_sym_STAR;
	v->a[23792] = anon_sym_QMARK;
	v->a[23793] = anon_sym_DOLLAR;
	v->a[23794] = anon_sym_POUND;
	v->a[23795] = anon_sym_AT;
	v->a[23796] = anon_sym_0;
	v->a[23797] = actions(345);
	v->a[23798] = 20;
	v->a[23799] = anon_sym_PIPE;
	small_parse_table_1190(v);
}

/* EOF small_parse_table_237.c */
