/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_287.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1435(t_small_parse_table_array *v)
{
	v->a[28700] = sym_string;
	v->a[28701] = sym_simple_expansion;
	v->a[28702] = sym_expansion;
	v->a[28703] = sym_command_substitution;
	v->a[28704] = actions(531);
	v->a[28705] = 16;
	v->a[28706] = anon_sym_PIPE;
	v->a[28707] = anon_sym_SEMI_SEMI;
	v->a[28708] = anon_sym_AMP_AMP;
	v->a[28709] = anon_sym_PIPE_PIPE;
	v->a[28710] = anon_sym_LT;
	v->a[28711] = anon_sym_GT;
	v->a[28712] = anon_sym_GT_GT;
	v->a[28713] = anon_sym_LT_AMP;
	v->a[28714] = anon_sym_GT_AMP;
	v->a[28715] = anon_sym_GT_PIPE;
	v->a[28716] = anon_sym_LT_GT;
	v->a[28717] = anon_sym_LT_LT;
	v->a[28718] = anon_sym_LT_LT_DASH;
	v->a[28719] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1436(v);
}

void	small_parse_table_1436(t_small_parse_table_array *v)
{
	v->a[28720] = anon_sym_BQUOTE;
	v->a[28721] = anon_sym_SEMI;
	v->a[28722] = 7;
	v->a[28723] = actions(3);
	v->a[28724] = 1;
	v->a[28725] = sym_comment;
	v->a[28726] = actions(812);
	v->a[28727] = 1;
	v->a[28728] = sym_variable_name;
	v->a[28729] = actions(1075);
	v->a[28730] = 2;
	v->a[28731] = sym_file_descriptor;
	v->a[28732] = ts_builtin_sym_end;
	v->a[28733] = state(1048);
	v->a[28734] = 2;
	v->a[28735] = sym_variable_assignment;
	v->a[28736] = aux_sym__variable_assignments_repeat1;
	v->a[28737] = state(1046);
	v->a[28738] = 3;
	v->a[28739] = sym_file_redirect;
	small_parse_table_1437(v);
}

void	small_parse_table_1437(t_small_parse_table_array *v)
{
	v->a[28740] = sym_heredoc_redirect;
	v->a[28741] = aux_sym_redirected_statement_repeat1;
	v->a[28742] = actions(780);
	v->a[28743] = 9;
	v->a[28744] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28745] = anon_sym_DOLLAR;
	v->a[28746] = anon_sym_DQUOTE;
	v->a[28747] = sym_raw_string;
	v->a[28748] = sym_number;
	v->a[28749] = anon_sym_DOLLAR_LBRACE;
	v->a[28750] = anon_sym_DOLLAR_LPAREN;
	v->a[28751] = anon_sym_BQUOTE;
	v->a[28752] = sym_word;
	v->a[28753] = actions(782);
	v->a[28754] = 15;
	v->a[28755] = anon_sym_PIPE;
	v->a[28756] = anon_sym_SEMI_SEMI;
	v->a[28757] = anon_sym_AMP_AMP;
	v->a[28758] = anon_sym_PIPE_PIPE;
	v->a[28759] = anon_sym_LT;
	small_parse_table_1438(v);
}

void	small_parse_table_1438(t_small_parse_table_array *v)
{
	v->a[28760] = anon_sym_GT;
	v->a[28761] = anon_sym_GT_GT;
	v->a[28762] = anon_sym_LT_AMP;
	v->a[28763] = anon_sym_GT_AMP;
	v->a[28764] = anon_sym_GT_PIPE;
	v->a[28765] = anon_sym_LT_GT;
	v->a[28766] = anon_sym_LT_LT;
	v->a[28767] = anon_sym_LT_LT_DASH;
	v->a[28768] = aux_sym_heredoc_redirect_token1;
	v->a[28769] = anon_sym_SEMI;
	v->a[28770] = 11;
	v->a[28771] = actions(3);
	v->a[28772] = 1;
	v->a[28773] = sym_comment;
	v->a[28774] = actions(782);
	v->a[28775] = 1;
	v->a[28776] = anon_sym_PIPE;
	v->a[28777] = actions(792);
	v->a[28778] = 1;
	v->a[28779] = sym_file_descriptor;
	small_parse_table_1439(v);
}

void	small_parse_table_1439(t_small_parse_table_array *v)
{
	v->a[28780] = actions(1030);
	v->a[28781] = 1;
	v->a[28782] = sym_variable_name;
	v->a[28783] = state(703);
	v->a[28784] = 1;
	v->a[28785] = sym_terminator;
	v->a[28786] = actions(790);
	v->a[28787] = 2;
	v->a[28788] = anon_sym_LT_LT;
	v->a[28789] = anon_sym_LT_LT_DASH;
	v->a[28790] = actions(1028);
	v->a[28791] = 2;
	v->a[28792] = anon_sym_AMP_AMP;
	v->a[28793] = anon_sym_PIPE_PIPE;
	v->a[28794] = state(1137);
	v->a[28795] = 2;
	v->a[28796] = sym_variable_assignment;
	v->a[28797] = aux_sym__variable_assignments_repeat1;
	v->a[28798] = actions(1087);
	v->a[28799] = 3;
	small_parse_table_1440(v);
}

/* EOF small_parse_table_287.c */
