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
	v->a[28700] = 2;
	v->a[28701] = anon_sym_EQ_EQ;
	v->a[28702] = anon_sym_BANG_EQ;
	v->a[28703] = actions(708);
	v->a[28704] = 2;
	v->a[28705] = anon_sym_LT_EQ;
	v->a[28706] = anon_sym_GT_EQ;
	v->a[28707] = actions(688);
	v->a[28708] = 3;
	v->a[28709] = anon_sym_STAR;
	v->a[28710] = anon_sym_SLASH;
	v->a[28711] = anon_sym_PERCENT;
	v->a[28712] = actions(953);
	v->a[28713] = 10;
	v->a[28714] = anon_sym_PLUS_EQ;
	v->a[28715] = anon_sym_DASH_EQ;
	v->a[28716] = anon_sym_STAR_EQ;
	v->a[28717] = anon_sym_SLASH_EQ;
	v->a[28718] = anon_sym_PERCENT_EQ;
	v->a[28719] = anon_sym_LT_LT_EQ;
	small_parse_table_1436(v);
}

void	small_parse_table_1436(t_small_parse_table_array *v)
{
	v->a[28720] = anon_sym_GT_GT_EQ;
	v->a[28721] = anon_sym_AMP_EQ;
	v->a[28722] = anon_sym_CARET_EQ;
	v->a[28723] = anon_sym_PIPE_EQ;
	v->a[28724] = 6;
	v->a[28725] = actions(3);
	v->a[28726] = 1;
	v->a[28727] = sym_comment;
	v->a[28728] = actions(1045);
	v->a[28729] = 1;
	v->a[28730] = aux_sym_concatenation_token1;
	v->a[28731] = actions(1049);
	v->a[28732] = 1;
	v->a[28733] = sym__concat;
	v->a[28734] = state(348);
	v->a[28735] = 1;
	v->a[28736] = aux_sym_concatenation_repeat1;
	v->a[28737] = actions(1047);
	v->a[28738] = 2;
	v->a[28739] = sym_file_descriptor;
	small_parse_table_1437(v);
}

void	small_parse_table_1437(t_small_parse_table_array *v)
{
	v->a[28740] = sym__bare_dollar;
	v->a[28741] = actions(1043);
	v->a[28742] = 27;
	v->a[28743] = anon_sym_LPAREN;
	v->a[28744] = anon_sym_PIPE;
	v->a[28745] = anon_sym_RPAREN;
	v->a[28746] = anon_sym_SEMI_SEMI;
	v->a[28747] = anon_sym_AMP_AMP;
	v->a[28748] = anon_sym_PIPE_PIPE;
	v->a[28749] = anon_sym_LT;
	v->a[28750] = anon_sym_GT;
	v->a[28751] = anon_sym_GT_GT;
	v->a[28752] = anon_sym_LT_AMP;
	v->a[28753] = anon_sym_GT_AMP;
	v->a[28754] = anon_sym_GT_PIPE;
	v->a[28755] = anon_sym_LT_GT;
	v->a[28756] = anon_sym_LT_LT;
	v->a[28757] = anon_sym_LT_LT_DASH;
	v->a[28758] = aux_sym_heredoc_redirect_token1;
	v->a[28759] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1438(v);
}

void	small_parse_table_1438(t_small_parse_table_array *v)
{
	v->a[28760] = anon_sym_AMP;
	v->a[28761] = anon_sym_DOLLAR;
	v->a[28762] = anon_sym_DQUOTE;
	v->a[28763] = sym_raw_string;
	v->a[28764] = sym_number;
	v->a[28765] = anon_sym_DOLLAR_LBRACE;
	v->a[28766] = anon_sym_DOLLAR_LPAREN;
	v->a[28767] = anon_sym_BQUOTE;
	v->a[28768] = sym_word;
	v->a[28769] = anon_sym_SEMI;
	v->a[28770] = 6;
	v->a[28771] = actions(3);
	v->a[28772] = 1;
	v->a[28773] = sym_comment;
	v->a[28774] = actions(1051);
	v->a[28775] = 1;
	v->a[28776] = aux_sym_concatenation_token1;
	v->a[28777] = actions(1053);
	v->a[28778] = 1;
	v->a[28779] = sym__concat;
	small_parse_table_1439(v);
}

void	small_parse_table_1439(t_small_parse_table_array *v)
{
	v->a[28780] = state(367);
	v->a[28781] = 1;
	v->a[28782] = aux_sym_concatenation_repeat1;
	v->a[28783] = actions(1047);
	v->a[28784] = 3;
	v->a[28785] = sym_file_descriptor;
	v->a[28786] = sym__bare_dollar;
	v->a[28787] = ts_builtin_sym_end;
	v->a[28788] = actions(1043);
	v->a[28789] = 26;
	v->a[28790] = anon_sym_LPAREN;
	v->a[28791] = anon_sym_PIPE;
	v->a[28792] = anon_sym_SEMI_SEMI;
	v->a[28793] = anon_sym_AMP_AMP;
	v->a[28794] = anon_sym_PIPE_PIPE;
	v->a[28795] = anon_sym_LT;
	v->a[28796] = anon_sym_GT;
	v->a[28797] = anon_sym_GT_GT;
	v->a[28798] = anon_sym_LT_AMP;
	v->a[28799] = anon_sym_GT_AMP;
	small_parse_table_1440(v);
}

/* EOF small_parse_table_287.c */
