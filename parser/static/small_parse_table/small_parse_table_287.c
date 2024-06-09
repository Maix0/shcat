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
	v->a[28700] = sym_command;
	v->a[28701] = state(1237);
	v->a[28702] = 1;
	v->a[28703] = sym_file_redirect;
	v->a[28704] = actions(256);
	v->a[28705] = 2;
	v->a[28706] = sym_raw_string;
	v->a[28707] = sym_word;
	v->a[28708] = actions(1100);
	v->a[28709] = 2;
	v->a[28710] = anon_sym_LT_AMP_DASH;
	v->a[28711] = anon_sym_GT_AMP_DASH;
	v->a[28712] = state(295);
	v->a[28713] = 6;
	v->a[28714] = sym_arithmetic_expansion;
	v->a[28715] = sym_string;
	v->a[28716] = sym_number;
	v->a[28717] = sym_simple_expansion;
	v->a[28718] = sym_expansion;
	v->a[28719] = sym_command_substitution;
	small_parse_table_1436(v);
}

void	small_parse_table_1436(t_small_parse_table_array *v)
{
	v->a[28720] = actions(1098);
	v->a[28721] = 8;
	v->a[28722] = anon_sym_LT;
	v->a[28723] = anon_sym_GT;
	v->a[28724] = anon_sym_GT_GT;
	v->a[28725] = anon_sym_AMP_GT;
	v->a[28726] = anon_sym_AMP_GT_GT;
	v->a[28727] = anon_sym_LT_AMP;
	v->a[28728] = anon_sym_GT_AMP;
	v->a[28729] = anon_sym_GT_PIPE;
	v->a[28730] = 6;
	v->a[28731] = actions(3);
	v->a[28732] = 1;
	v->a[28733] = sym_comment;
	v->a[28734] = actions(1135);
	v->a[28735] = 1;
	v->a[28736] = aux_sym_concatenation_token1;
	v->a[28737] = actions(1138);
	v->a[28738] = 1;
	v->a[28739] = sym__concat;
	small_parse_table_1437(v);
}

void	small_parse_table_1437(t_small_parse_table_array *v)
{
	v->a[28740] = state(289);
	v->a[28741] = 1;
	v->a[28742] = aux_sym_concatenation_repeat1;
	v->a[28743] = actions(1112);
	v->a[28744] = 2;
	v->a[28745] = sym_file_descriptor;
	v->a[28746] = sym__bare_dollar;
	v->a[28747] = actions(1114);
	v->a[28748] = 31;
	v->a[28749] = anon_sym_esac;
	v->a[28750] = anon_sym_LPAREN;
	v->a[28751] = anon_sym_PIPE;
	v->a[28752] = anon_sym_SEMI_SEMI;
	v->a[28753] = anon_sym_AMP_AMP;
	v->a[28754] = anon_sym_PIPE_PIPE;
	v->a[28755] = anon_sym_LT;
	v->a[28756] = anon_sym_GT;
	v->a[28757] = anon_sym_GT_GT;
	v->a[28758] = anon_sym_AMP_GT;
	v->a[28759] = anon_sym_AMP_GT_GT;
	small_parse_table_1438(v);
}

void	small_parse_table_1438(t_small_parse_table_array *v)
{
	v->a[28760] = anon_sym_LT_AMP;
	v->a[28761] = anon_sym_GT_AMP;
	v->a[28762] = anon_sym_GT_PIPE;
	v->a[28763] = anon_sym_LT_AMP_DASH;
	v->a[28764] = anon_sym_GT_AMP_DASH;
	v->a[28765] = anon_sym_LT_LT;
	v->a[28766] = anon_sym_LT_LT_DASH;
	v->a[28767] = aux_sym_heredoc_redirect_token1;
	v->a[28768] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28769] = anon_sym_AMP;
	v->a[28770] = anon_sym_DOLLAR;
	v->a[28771] = anon_sym_DQUOTE;
	v->a[28772] = sym_raw_string;
	v->a[28773] = aux_sym_number_token1;
	v->a[28774] = aux_sym_number_token2;
	v->a[28775] = anon_sym_DOLLAR_LBRACE;
	v->a[28776] = anon_sym_DOLLAR_LPAREN;
	v->a[28777] = anon_sym_BQUOTE;
	v->a[28778] = sym_word;
	v->a[28779] = anon_sym_SEMI;
	small_parse_table_1439(v);
}

void	small_parse_table_1439(t_small_parse_table_array *v)
{
	v->a[28780] = 11;
	v->a[28781] = actions(3);
	v->a[28782] = 1;
	v->a[28783] = sym_comment;
	v->a[28784] = actions(1002);
	v->a[28785] = 1;
	v->a[28786] = anon_sym_PIPE;
	v->a[28787] = actions(1006);
	v->a[28788] = 1;
	v->a[28789] = sym_file_descriptor;
	v->a[28790] = actions(1033);
	v->a[28791] = 1;
	v->a[28792] = anon_sym_BQUOTE;
	v->a[28793] = actions(1124);
	v->a[28794] = 1;
	v->a[28795] = sym_variable_name;
	v->a[28796] = actions(1062);
	v->a[28797] = 2;
	v->a[28798] = anon_sym_LT_LT;
	v->a[28799] = anon_sym_LT_LT_DASH;
	small_parse_table_1440(v);
}

/* EOF small_parse_table_287.c */
