/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1633.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8165(t_small_parse_table_array *v)
{
	v->a[163300] = actions(7222);
	v->a[163301] = 1;
	v->a[163302] = sym_test_operator;
	v->a[163303] = actions(7376);
	v->a[163304] = 1;
	v->a[163305] = anon_sym_EQ;
	v->a[163306] = actions(7380);
	v->a[163307] = 1;
	v->a[163308] = anon_sym_PIPE_PIPE;
	v->a[163309] = actions(7382);
	v->a[163310] = 1;
	v->a[163311] = anon_sym_AMP_AMP;
	v->a[163312] = actions(7384);
	v->a[163313] = 1;
	v->a[163314] = anon_sym_PIPE;
	v->a[163315] = actions(7386);
	v->a[163316] = 1;
	v->a[163317] = anon_sym_CARET;
	v->a[163318] = actions(7388);
	v->a[163319] = 1;
	small_parse_table_8166(v);
}

void	small_parse_table_8166(t_small_parse_table_array *v)
{
	v->a[163320] = anon_sym_AMP;
	v->a[163321] = actions(7390);
	v->a[163322] = 1;
	v->a[163323] = anon_sym_EQ_TILDE;
	v->a[163324] = actions(7392);
	v->a[163325] = 1;
	v->a[163326] = anon_sym_QMARK;
	v->a[163327] = actions(7463);
	v->a[163328] = 1;
	v->a[163329] = anon_sym_RPAREN_RPAREN;
	v->a[163330] = actions(6793);
	v->a[163331] = 2;
	v->a[163332] = anon_sym_PLUS_PLUS;
	v->a[163333] = anon_sym_DASH_DASH;
	v->a[163334] = actions(7208);
	v->a[163335] = 2;
	v->a[163336] = anon_sym_EQ_EQ;
	v->a[163337] = anon_sym_BANG_EQ;
	v->a[163338] = actions(7210);
	v->a[163339] = 2;
	small_parse_table_8167(v);
}

void	small_parse_table_8167(t_small_parse_table_array *v)
{
	v->a[163340] = anon_sym_LT;
	v->a[163341] = anon_sym_GT;
	v->a[163342] = actions(7212);
	v->a[163343] = 2;
	v->a[163344] = anon_sym_LT_EQ;
	v->a[163345] = anon_sym_GT_EQ;
	v->a[163346] = actions(7214);
	v->a[163347] = 2;
	v->a[163348] = anon_sym_LT_LT;
	v->a[163349] = anon_sym_GT_GT;
	v->a[163350] = actions(7216);
	v->a[163351] = 2;
	v->a[163352] = anon_sym_PLUS;
	v->a[163353] = anon_sym_DASH;
	v->a[163354] = actions(7218);
	v->a[163355] = 3;
	v->a[163356] = anon_sym_STAR;
	v->a[163357] = anon_sym_SLASH;
	v->a[163358] = anon_sym_PERCENT;
	v->a[163359] = actions(7378);
	small_parse_table_8168(v);
}

void	small_parse_table_8168(t_small_parse_table_array *v)
{
	v->a[163360] = 11;
	v->a[163361] = anon_sym_PLUS_EQ;
	v->a[163362] = anon_sym_DASH_EQ;
	v->a[163363] = anon_sym_STAR_EQ;
	v->a[163364] = anon_sym_SLASH_EQ;
	v->a[163365] = anon_sym_PERCENT_EQ;
	v->a[163366] = anon_sym_STAR_STAR_EQ;
	v->a[163367] = anon_sym_LT_LT_EQ;
	v->a[163368] = anon_sym_GT_GT_EQ;
	v->a[163369] = anon_sym_AMP_EQ;
	v->a[163370] = anon_sym_CARET_EQ;
	v->a[163371] = anon_sym_PIPE_EQ;
	v->a[163372] = 3;
	v->a[163373] = actions(3);
	v->a[163374] = 1;
	v->a[163375] = sym_comment;
	v->a[163376] = actions(7467);
	v->a[163377] = 1;
	v->a[163378] = aux_sym_heredoc_redirect_token1;
	v->a[163379] = actions(7465);
	small_parse_table_8169(v);
}

void	small_parse_table_8169(t_small_parse_table_array *v)
{
	v->a[163380] = 36;
	v->a[163381] = anon_sym_SEMI;
	v->a[163382] = anon_sym_COMMA;
	v->a[163383] = anon_sym_PLUS_PLUS;
	v->a[163384] = anon_sym_DASH_DASH;
	v->a[163385] = anon_sym_PLUS_EQ;
	v->a[163386] = anon_sym_DASH_EQ;
	v->a[163387] = anon_sym_STAR_EQ;
	v->a[163388] = anon_sym_SLASH_EQ;
	v->a[163389] = anon_sym_PERCENT_EQ;
	v->a[163390] = anon_sym_STAR_STAR_EQ;
	v->a[163391] = anon_sym_LT_LT_EQ;
	v->a[163392] = anon_sym_GT_GT_EQ;
	v->a[163393] = anon_sym_AMP_EQ;
	v->a[163394] = anon_sym_CARET_EQ;
	v->a[163395] = anon_sym_PIPE_EQ;
	v->a[163396] = anon_sym_PIPE_PIPE;
	v->a[163397] = anon_sym_DASHo;
	v->a[163398] = anon_sym_AMP_AMP;
	v->a[163399] = anon_sym_DASHa;
	small_parse_table_8170(v);
}

/* EOF small_parse_table_1633.c */
