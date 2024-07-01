/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_307.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1535(t_small_parse_table_array *v)
{
	v->a[30700] = 3;
	v->a[30701] = sym_raw_string;
	v->a[30702] = sym_number;
	v->a[30703] = sym_word;
	v->a[30704] = state(1106);
	v->a[30705] = 5;
	v->a[30706] = sym_arithmetic_expansion;
	v->a[30707] = sym_string;
	v->a[30708] = sym_simple_expansion;
	v->a[30709] = sym_expansion;
	v->a[30710] = sym_command_substitution;
	v->a[30711] = actions(711);
	v->a[30712] = 18;
	v->a[30713] = anon_sym_PIPE;
	v->a[30714] = anon_sym_SEMI_SEMI;
	v->a[30715] = anon_sym_AMP_AMP;
	v->a[30716] = anon_sym_PIPE_PIPE;
	v->a[30717] = anon_sym_LT;
	v->a[30718] = anon_sym_GT;
	v->a[30719] = anon_sym_GT_GT;
	small_parse_table_1536(v);
}

void	small_parse_table_1536(t_small_parse_table_array *v)
{
	v->a[30720] = anon_sym_LT_AMP;
	v->a[30721] = anon_sym_GT_AMP;
	v->a[30722] = anon_sym_GT_PIPE;
	v->a[30723] = anon_sym_LT_AMP_DASH;
	v->a[30724] = anon_sym_GT_AMP_DASH;
	v->a[30725] = anon_sym_LT_LT;
	v->a[30726] = anon_sym_LT_LT_DASH;
	v->a[30727] = aux_sym_heredoc_redirect_token1;
	v->a[30728] = anon_sym_AMP;
	v->a[30729] = anon_sym_BQUOTE;
	v->a[30730] = anon_sym_SEMI;
	v->a[30731] = 17;
	v->a[30732] = actions(842);
	v->a[30733] = 1;
	v->a[30734] = anon_sym_PIPE;
	v->a[30735] = actions(844);
	v->a[30736] = 1;
	v->a[30737] = anon_sym_AMP_AMP;
	v->a[30738] = actions(846);
	v->a[30739] = 1;
	small_parse_table_1537(v);
}

void	small_parse_table_1537(t_small_parse_table_array *v)
{
	v->a[30740] = anon_sym_PIPE_PIPE;
	v->a[30741] = actions(856);
	v->a[30742] = 1;
	v->a[30743] = anon_sym_CARET;
	v->a[30744] = actions(858);
	v->a[30745] = 1;
	v->a[30746] = anon_sym_AMP;
	v->a[30747] = actions(870);
	v->a[30748] = 1;
	v->a[30749] = sym_comment;
	v->a[30750] = actions(1021);
	v->a[30751] = 1;
	v->a[30752] = anon_sym_EQ;
	v->a[30753] = actions(1023);
	v->a[30754] = 1;
	v->a[30755] = anon_sym_QMARK;
	v->a[30756] = actions(1164);
	v->a[30757] = 1;
	v->a[30758] = anon_sym_RPAREN_RPAREN;
	v->a[30759] = actions(850);
	small_parse_table_1538(v);
}

void	small_parse_table_1538(t_small_parse_table_array *v)
{
	v->a[30760] = 2;
	v->a[30761] = anon_sym_LT;
	v->a[30762] = anon_sym_GT;
	v->a[30763] = actions(852);
	v->a[30764] = 2;
	v->a[30765] = anon_sym_GT_GT;
	v->a[30766] = anon_sym_LT_LT;
	v->a[30767] = actions(860);
	v->a[30768] = 2;
	v->a[30769] = anon_sym_EQ_EQ;
	v->a[30770] = anon_sym_BANG_EQ;
	v->a[30771] = actions(862);
	v->a[30772] = 2;
	v->a[30773] = anon_sym_LT_EQ;
	v->a[30774] = anon_sym_GT_EQ;
	v->a[30775] = actions(864);
	v->a[30776] = 2;
	v->a[30777] = anon_sym_PLUS;
	v->a[30778] = anon_sym_DASH;
	v->a[30779] = actions(868);
	small_parse_table_1539(v);
}

void	small_parse_table_1539(t_small_parse_table_array *v)
{
	v->a[30780] = 2;
	v->a[30781] = anon_sym_PLUS_PLUS2;
	v->a[30782] = anon_sym_DASH_DASH2;
	v->a[30783] = actions(866);
	v->a[30784] = 3;
	v->a[30785] = anon_sym_STAR;
	v->a[30786] = anon_sym_SLASH;
	v->a[30787] = anon_sym_PERCENT;
	v->a[30788] = actions(1079);
	v->a[30789] = 10;
	v->a[30790] = anon_sym_PLUS_EQ;
	v->a[30791] = anon_sym_DASH_EQ;
	v->a[30792] = anon_sym_STAR_EQ;
	v->a[30793] = anon_sym_SLASH_EQ;
	v->a[30794] = anon_sym_PERCENT_EQ;
	v->a[30795] = anon_sym_LT_LT_EQ;
	v->a[30796] = anon_sym_GT_GT_EQ;
	v->a[30797] = anon_sym_AMP_EQ;
	v->a[30798] = anon_sym_CARET_EQ;
	v->a[30799] = anon_sym_PIPE_EQ;
	small_parse_table_1540(v);
}

/* EOF small_parse_table_307.c */
