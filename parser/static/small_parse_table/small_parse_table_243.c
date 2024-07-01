/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_243.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1215(t_small_parse_table_array *v)
{
	v->a[24300] = 1;
	v->a[24301] = anon_sym_BQUOTE;
	v->a[24302] = state(263);
	v->a[24303] = 2;
	v->a[24304] = sym_concatenation;
	v->a[24305] = aux_sym_for_statement_repeat1;
	v->a[24306] = actions(947);
	v->a[24307] = 3;
	v->a[24308] = sym_raw_string;
	v->a[24309] = sym_number;
	v->a[24310] = sym_word;
	v->a[24311] = state(616);
	v->a[24312] = 5;
	v->a[24313] = sym_arithmetic_expansion;
	v->a[24314] = sym_string;
	v->a[24315] = sym_simple_expansion;
	v->a[24316] = sym_expansion;
	v->a[24317] = sym_command_substitution;
	v->a[24318] = actions(497);
	v->a[24319] = 16;
	small_parse_table_1216(v);
}

void	small_parse_table_1216(t_small_parse_table_array *v)
{
	v->a[24320] = anon_sym_PIPE;
	v->a[24321] = anon_sym_SEMI_SEMI;
	v->a[24322] = anon_sym_AMP_AMP;
	v->a[24323] = anon_sym_PIPE_PIPE;
	v->a[24324] = anon_sym_LT;
	v->a[24325] = anon_sym_GT;
	v->a[24326] = anon_sym_GT_GT;
	v->a[24327] = anon_sym_LT_AMP;
	v->a[24328] = anon_sym_GT_AMP;
	v->a[24329] = anon_sym_GT_PIPE;
	v->a[24330] = anon_sym_LT_GT;
	v->a[24331] = anon_sym_LT_LT;
	v->a[24332] = anon_sym_LT_LT_DASH;
	v->a[24333] = aux_sym_heredoc_redirect_token1;
	v->a[24334] = anon_sym_AMP;
	v->a[24335] = anon_sym_SEMI;
	v->a[24336] = 17;
	v->a[24337] = actions(664);
	v->a[24338] = 1;
	v->a[24339] = sym_comment;
	small_parse_table_1217(v);
}

void	small_parse_table_1217(t_small_parse_table_array *v)
{
	v->a[24340] = actions(702);
	v->a[24341] = 1;
	v->a[24342] = anon_sym_CARET;
	v->a[24343] = actions(704);
	v->a[24344] = 1;
	v->a[24345] = anon_sym_AMP;
	v->a[24346] = actions(710);
	v->a[24347] = 1;
	v->a[24348] = anon_sym_PIPE;
	v->a[24349] = actions(712);
	v->a[24350] = 1;
	v->a[24351] = anon_sym_AMP_AMP;
	v->a[24352] = actions(714);
	v->a[24353] = 1;
	v->a[24354] = anon_sym_PIPE_PIPE;
	v->a[24355] = actions(716);
	v->a[24356] = 1;
	v->a[24357] = anon_sym_QMARK;
	v->a[24358] = actions(718);
	v->a[24359] = 1;
	small_parse_table_1218(v);
}

void	small_parse_table_1218(t_small_parse_table_array *v)
{
	v->a[24360] = anon_sym_EQ;
	v->a[24361] = actions(951);
	v->a[24362] = 1;
	v->a[24363] = anon_sym_RPAREN_RPAREN;
	v->a[24364] = actions(684);
	v->a[24365] = 2;
	v->a[24366] = anon_sym_GT_GT;
	v->a[24367] = anon_sym_LT_LT;
	v->a[24368] = actions(686);
	v->a[24369] = 2;
	v->a[24370] = anon_sym_PLUS;
	v->a[24371] = anon_sym_DASH;
	v->a[24372] = actions(690);
	v->a[24373] = 2;
	v->a[24374] = anon_sym_PLUS_PLUS2;
	v->a[24375] = anon_sym_DASH_DASH2;
	v->a[24376] = actions(700);
	v->a[24377] = 2;
	v->a[24378] = anon_sym_LT;
	v->a[24379] = anon_sym_GT;
	small_parse_table_1219(v);
}

void	small_parse_table_1219(t_small_parse_table_array *v)
{
	v->a[24380] = actions(706);
	v->a[24381] = 2;
	v->a[24382] = anon_sym_EQ_EQ;
	v->a[24383] = anon_sym_BANG_EQ;
	v->a[24384] = actions(708);
	v->a[24385] = 2;
	v->a[24386] = anon_sym_LT_EQ;
	v->a[24387] = anon_sym_GT_EQ;
	v->a[24388] = actions(688);
	v->a[24389] = 3;
	v->a[24390] = anon_sym_STAR;
	v->a[24391] = anon_sym_SLASH;
	v->a[24392] = anon_sym_PERCENT;
	v->a[24393] = actions(953);
	v->a[24394] = 10;
	v->a[24395] = anon_sym_PLUS_EQ;
	v->a[24396] = anon_sym_DASH_EQ;
	v->a[24397] = anon_sym_STAR_EQ;
	v->a[24398] = anon_sym_SLASH_EQ;
	v->a[24399] = anon_sym_PERCENT_EQ;
	small_parse_table_1220(v);
}

/* EOF small_parse_table_243.c */
