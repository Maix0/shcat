/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_817.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4085(t_small_parse_table_array *v)
{
	v->a[81700] = 12;
	v->a[81701] = anon_sym_AMP_AMP;
	v->a[81702] = anon_sym_PIPE_PIPE;
	v->a[81703] = anon_sym_LT;
	v->a[81704] = anon_sym_GT;
	v->a[81705] = anon_sym_GT_GT;
	v->a[81706] = anon_sym_AMP_GT;
	v->a[81707] = anon_sym_AMP_GT_GT;
	v->a[81708] = anon_sym_LT_AMP;
	v->a[81709] = anon_sym_GT_AMP;
	v->a[81710] = anon_sym_GT_PIPE;
	v->a[81711] = anon_sym_LT_AMP_DASH;
	v->a[81712] = anon_sym_GT_AMP_DASH;
	v->a[81713] = 5;
	v->a[81714] = actions(3);
	v->a[81715] = 1;
	v->a[81716] = sym_comment;
	v->a[81717] = actions(3376);
	v->a[81718] = 1;
	v->a[81719] = aux_sym_concatenation_token1;
	small_parse_table_4086(v);
}

void	small_parse_table_4086(t_small_parse_table_array *v)
{
	v->a[81720] = actions(3382);
	v->a[81721] = 1;
	v->a[81722] = sym__concat;
	v->a[81723] = state(1499);
	v->a[81724] = 1;
	v->a[81725] = aux_sym_concatenation_repeat1;
	v->a[81726] = actions(1206);
	v->a[81727] = 14;
	v->a[81728] = anon_sym_SEMI_SEMI;
	v->a[81729] = aux_sym_heredoc_redirect_token1;
	v->a[81730] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81731] = anon_sym_AMP;
	v->a[81732] = anon_sym_DOLLAR;
	v->a[81733] = anon_sym_DQUOTE;
	v->a[81734] = sym_raw_string;
	v->a[81735] = aux_sym_number_token1;
	v->a[81736] = aux_sym_number_token2;
	v->a[81737] = anon_sym_DOLLAR_LBRACE;
	v->a[81738] = anon_sym_DOLLAR_LPAREN;
	v->a[81739] = anon_sym_BQUOTE;
	small_parse_table_4087(v);
}

void	small_parse_table_4087(t_small_parse_table_array *v)
{
	v->a[81740] = sym_word;
	v->a[81741] = anon_sym_SEMI;
	v->a[81742] = 5;
	v->a[81743] = actions(3);
	v->a[81744] = 1;
	v->a[81745] = sym_comment;
	v->a[81746] = actions(3388);
	v->a[81747] = 1;
	v->a[81748] = sym_variable_name;
	v->a[81749] = actions(3386);
	v->a[81750] = 2;
	v->a[81751] = aux_sym__simple_variable_name_token1;
	v->a[81752] = aux_sym__multiline_variable_name_token1;
	v->a[81753] = actions(407);
	v->a[81754] = 5;
	v->a[81755] = anon_sym_in;
	v->a[81756] = anon_sym_SEMI_SEMI;
	v->a[81757] = aux_sym_heredoc_redirect_token1;
	v->a[81758] = anon_sym_AMP;
	v->a[81759] = anon_sym_SEMI;
	small_parse_table_4088(v);
}

void	small_parse_table_4088(t_small_parse_table_array *v)
{
	v->a[81760] = actions(3384);
	v->a[81761] = 9;
	v->a[81762] = anon_sym_BANG;
	v->a[81763] = anon_sym_DASH;
	v->a[81764] = anon_sym_STAR;
	v->a[81765] = anon_sym_QMARK;
	v->a[81766] = anon_sym_DOLLAR;
	v->a[81767] = anon_sym_POUND;
	v->a[81768] = anon_sym_AT;
	v->a[81769] = anon_sym_0;
	v->a[81770] = anon_sym__;
	v->a[81771] = 5;
	v->a[81772] = actions(1404);
	v->a[81773] = 1;
	v->a[81774] = sym_comment;
	v->a[81775] = actions(3390);
	v->a[81776] = 1;
	v->a[81777] = anon_sym_PIPE;
	v->a[81778] = state(1505);
	v->a[81779] = 1;
	small_parse_table_4089(v);
}

void	small_parse_table_4089(t_small_parse_table_array *v)
{
	v->a[81780] = aux_sym_pipeline_repeat1;
	v->a[81781] = actions(2252);
	v->a[81782] = 6;
	v->a[81783] = anon_sym_LT;
	v->a[81784] = anon_sym_GT;
	v->a[81785] = anon_sym_AMP_GT;
	v->a[81786] = anon_sym_LT_AMP;
	v->a[81787] = anon_sym_GT_AMP;
	v->a[81788] = anon_sym_LT_LT;
	v->a[81789] = actions(2247);
	v->a[81790] = 9;
	v->a[81791] = sym_file_descriptor;
	v->a[81792] = anon_sym_AMP_AMP;
	v->a[81793] = anon_sym_PIPE_PIPE;
	v->a[81794] = anon_sym_GT_GT;
	v->a[81795] = anon_sym_AMP_GT_GT;
	v->a[81796] = anon_sym_GT_PIPE;
	v->a[81797] = anon_sym_LT_AMP_DASH;
	v->a[81798] = anon_sym_GT_AMP_DASH;
	v->a[81799] = anon_sym_LT_LT_DASH;
	small_parse_table_4090(v);
}

/* EOF small_parse_table_817.c */
