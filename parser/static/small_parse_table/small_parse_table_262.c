/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_262.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1310(t_small_parse_table_array *v)
{
	v->a[26200] = 1;
	v->a[26201] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26202] = actions(763);
	v->a[26203] = 1;
	v->a[26204] = anon_sym_DOLLAR;
	v->a[26205] = actions(765);
	v->a[26206] = 1;
	v->a[26207] = anon_sym_DQUOTE;
	v->a[26208] = actions(767);
	v->a[26209] = 1;
	v->a[26210] = aux_sym_number_token1;
	v->a[26211] = actions(769);
	v->a[26212] = 1;
	v->a[26213] = aux_sym_number_token2;
	v->a[26214] = actions(771);
	v->a[26215] = 1;
	v->a[26216] = anon_sym_DOLLAR_LBRACE;
	v->a[26217] = actions(773);
	v->a[26218] = 1;
	v->a[26219] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1311(v);
}

void	small_parse_table_1311(t_small_parse_table_array *v)
{
	v->a[26220] = actions(955);
	v->a[26221] = 2;
	v->a[26222] = sym_raw_string;
	v->a[26223] = sym_word;
	v->a[26224] = state(245);
	v->a[26225] = 2;
	v->a[26226] = sym_concatenation;
	v->a[26227] = aux_sym_for_statement_repeat1;
	v->a[26228] = state(566);
	v->a[26229] = 6;
	v->a[26230] = sym_arithmetic_expansion;
	v->a[26231] = sym_string;
	v->a[26232] = sym_number;
	v->a[26233] = sym_simple_expansion;
	v->a[26234] = sym_expansion;
	v->a[26235] = sym_command_substitution;
	v->a[26236] = actions(567);
	v->a[26237] = 20;
	v->a[26238] = anon_sym_PIPE;
	v->a[26239] = anon_sym_SEMI_SEMI;
	small_parse_table_1312(v);
}

void	small_parse_table_1312(t_small_parse_table_array *v)
{
	v->a[26240] = anon_sym_AMP_AMP;
	v->a[26241] = anon_sym_PIPE_PIPE;
	v->a[26242] = anon_sym_LT;
	v->a[26243] = anon_sym_GT;
	v->a[26244] = anon_sym_GT_GT;
	v->a[26245] = anon_sym_AMP_GT;
	v->a[26246] = anon_sym_AMP_GT_GT;
	v->a[26247] = anon_sym_LT_AMP;
	v->a[26248] = anon_sym_GT_AMP;
	v->a[26249] = anon_sym_GT_PIPE;
	v->a[26250] = anon_sym_LT_AMP_DASH;
	v->a[26251] = anon_sym_GT_AMP_DASH;
	v->a[26252] = anon_sym_LT_LT;
	v->a[26253] = anon_sym_LT_LT_DASH;
	v->a[26254] = aux_sym_heredoc_redirect_token1;
	v->a[26255] = anon_sym_AMP;
	v->a[26256] = anon_sym_BQUOTE;
	v->a[26257] = anon_sym_SEMI;
	v->a[26258] = 22;
	v->a[26259] = actions(3);
	small_parse_table_1313(v);
}

void	small_parse_table_1313(t_small_parse_table_array *v)
{
	v->a[26260] = 1;
	v->a[26261] = sym_comment;
	v->a[26262] = actions(933);
	v->a[26263] = 1;
	v->a[26264] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26265] = actions(935);
	v->a[26266] = 1;
	v->a[26267] = anon_sym_DOLLAR;
	v->a[26268] = actions(937);
	v->a[26269] = 1;
	v->a[26270] = anon_sym_DQUOTE;
	v->a[26271] = actions(939);
	v->a[26272] = 1;
	v->a[26273] = aux_sym_number_token1;
	v->a[26274] = actions(941);
	v->a[26275] = 1;
	v->a[26276] = aux_sym_number_token2;
	v->a[26277] = actions(943);
	v->a[26278] = 1;
	v->a[26279] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1314(v);
}

void	small_parse_table_1314(t_small_parse_table_array *v)
{
	v->a[26280] = actions(945);
	v->a[26281] = 1;
	v->a[26282] = anon_sym_DOLLAR_LPAREN;
	v->a[26283] = actions(947);
	v->a[26284] = 1;
	v->a[26285] = anon_sym_BQUOTE;
	v->a[26286] = actions(949);
	v->a[26287] = 1;
	v->a[26288] = sym_file_descriptor;
	v->a[26289] = actions(968);
	v->a[26290] = 1;
	v->a[26291] = aux_sym_heredoc_redirect_token1;
	v->a[26292] = state(1314);
	v->a[26293] = 1;
	v->a[26294] = aux_sym__heredoc_command;
	v->a[26295] = state(1832);
	v->a[26296] = 1;
	v->a[26297] = sym_concatenation;
	v->a[26298] = state(2055);
	v->a[26299] = 1;
	small_parse_table_1315(v);
}

/* EOF small_parse_table_262.c */
