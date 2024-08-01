/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_507.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2535(t_small_parse_table_array *v)
{
	v->a[50700] = anon_sym_RBRACE;
	v->a[50701] = state(1646);
	v->a[50702] = 1;
	v->a[50703] = sym__expansion_body;
	v->a[50704] = actions(2275);
	v->a[50705] = 6;
	v->a[50706] = anon_sym_BANG;
	v->a[50707] = anon_sym_DASH;
	v->a[50708] = anon_sym_STAR;
	v->a[50709] = anon_sym_QMARK;
	v->a[50710] = anon_sym_DOLLAR;
	v->a[50711] = anon_sym_AT;
	v->a[50712] = 10;
	v->a[50713] = actions(3);
	v->a[50714] = 1;
	v->a[50715] = sym_comment;
	v->a[50716] = actions(2293);
	v->a[50717] = 1;
	v->a[50718] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50719] = actions(2299);
	small_parse_table_2536(v);
}

void	small_parse_table_2536(t_small_parse_table_array *v)
{
	v->a[50720] = 1;
	v->a[50721] = sym_string_content;
	v->a[50722] = actions(2301);
	v->a[50723] = 1;
	v->a[50724] = anon_sym_DOLLAR_LBRACE;
	v->a[50725] = actions(2303);
	v->a[50726] = 1;
	v->a[50727] = anon_sym_DOLLAR_LPAREN;
	v->a[50728] = actions(2305);
	v->a[50729] = 1;
	v->a[50730] = anon_sym_BQUOTE;
	v->a[50731] = actions(2528);
	v->a[50732] = 1;
	v->a[50733] = anon_sym_DOLLAR;
	v->a[50734] = actions(2530);
	v->a[50735] = 1;
	v->a[50736] = anon_sym_DQUOTE;
	v->a[50737] = state(1156);
	v->a[50738] = 1;
	v->a[50739] = aux_sym_string_repeat1;
	small_parse_table_2537(v);
}

void	small_parse_table_2537(t_small_parse_table_array *v)
{
	v->a[50740] = state(1394);
	v->a[50741] = 4;
	v->a[50742] = sym_arithmetic_expansion;
	v->a[50743] = sym_simple_expansion;
	v->a[50744] = sym_expansion;
	v->a[50745] = sym_command_substitution;
	v->a[50746] = 4;
	v->a[50747] = actions(3);
	v->a[50748] = 1;
	v->a[50749] = sym_comment;
	v->a[50750] = actions(2522);
	v->a[50751] = 1;
	v->a[50752] = anon_sym_esac;
	v->a[50753] = actions(2524);
	v->a[50754] = 1;
	v->a[50755] = sym_extglob_pattern;
	v->a[50756] = actions(2520);
	v->a[50757] = 10;
	v->a[50758] = anon_sym_LPAREN;
	v->a[50759] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2538(v);
}

void	small_parse_table_2538(t_small_parse_table_array *v)
{
	v->a[50760] = anon_sym_DOLLAR;
	v->a[50761] = anon_sym_DQUOTE;
	v->a[50762] = sym_raw_string;
	v->a[50763] = sym_number;
	v->a[50764] = anon_sym_DOLLAR_LBRACE;
	v->a[50765] = anon_sym_DOLLAR_LPAREN;
	v->a[50766] = anon_sym_BQUOTE;
	v->a[50767] = sym_word;
	v->a[50768] = 5;
	v->a[50769] = actions(3);
	v->a[50770] = 1;
	v->a[50771] = sym_comment;
	v->a[50772] = actions(2357);
	v->a[50773] = 1;
	v->a[50774] = aux_sym_heredoc_redirect_token1;
	v->a[50775] = actions(2532);
	v->a[50776] = 1;
	v->a[50777] = anon_sym_PIPE;
	v->a[50778] = state(1178);
	v->a[50779] = 1;
	small_parse_table_2539(v);
}

void	small_parse_table_2539(t_small_parse_table_array *v)
{
	v->a[50780] = aux_sym_pipeline_repeat1;
	v->a[50781] = actions(2353);
	v->a[50782] = 9;
	v->a[50783] = anon_sym_SEMI_SEMI;
	v->a[50784] = anon_sym_AMP_AMP;
	v->a[50785] = anon_sym_PIPE_PIPE;
	v->a[50786] = anon_sym_LT;
	v->a[50787] = anon_sym_GT;
	v->a[50788] = anon_sym_GT_GT;
	v->a[50789] = anon_sym_LT_LT;
	v->a[50790] = anon_sym_BQUOTE;
	v->a[50791] = anon_sym_SEMI;
	v->a[50792] = 10;
	v->a[50793] = actions(3);
	v->a[50794] = 1;
	v->a[50795] = sym_comment;
	v->a[50796] = actions(2293);
	v->a[50797] = 1;
	v->a[50798] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50799] = actions(2299);
	small_parse_table_2540(v);
}

/* EOF small_parse_table_507.c */
