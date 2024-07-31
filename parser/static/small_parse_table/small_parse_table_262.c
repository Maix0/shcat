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
	v->a[26200] = actions(999);
	v->a[26201] = 1;
	v->a[26202] = sym__concat;
	v->a[26203] = actions(1001);
	v->a[26204] = 1;
	v->a[26205] = sym__bare_dollar;
	v->a[26206] = state(358);
	v->a[26207] = 1;
	v->a[26208] = aux_sym_concatenation_repeat1;
	v->a[26209] = actions(997);
	v->a[26210] = 25;
	v->a[26211] = anon_sym_PIPE;
	v->a[26212] = anon_sym_RPAREN;
	v->a[26213] = anon_sym_SEMI_SEMI;
	v->a[26214] = anon_sym_AMP_AMP;
	v->a[26215] = anon_sym_PIPE_PIPE;
	v->a[26216] = anon_sym_LT;
	v->a[26217] = anon_sym_GT;
	v->a[26218] = anon_sym_GT_GT;
	v->a[26219] = anon_sym_LT_AMP;
	small_parse_table_1311(v);
}

void	small_parse_table_1311(t_small_parse_table_array *v)
{
	v->a[26220] = anon_sym_GT_AMP;
	v->a[26221] = anon_sym_GT_PIPE;
	v->a[26222] = anon_sym_LT_GT;
	v->a[26223] = anon_sym_LT_LT;
	v->a[26224] = anon_sym_LT_LT_DASH;
	v->a[26225] = aux_sym_heredoc_redirect_token1;
	v->a[26226] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26227] = anon_sym_DOLLAR;
	v->a[26228] = anon_sym_DQUOTE;
	v->a[26229] = sym_raw_string;
	v->a[26230] = sym_number;
	v->a[26231] = anon_sym_DOLLAR_LBRACE;
	v->a[26232] = anon_sym_DOLLAR_LPAREN;
	v->a[26233] = anon_sym_BQUOTE;
	v->a[26234] = sym_word;
	v->a[26235] = anon_sym_SEMI;
	v->a[26236] = 6;
	v->a[26237] = actions(3);
	v->a[26238] = 1;
	v->a[26239] = sym_comment;
	small_parse_table_1312(v);
}

void	small_parse_table_1312(t_small_parse_table_array *v)
{
	v->a[26240] = actions(975);
	v->a[26241] = 1;
	v->a[26242] = sym__bare_dollar;
	v->a[26243] = actions(987);
	v->a[26244] = 1;
	v->a[26245] = aux_sym_concatenation_token1;
	v->a[26246] = actions(989);
	v->a[26247] = 1;
	v->a[26248] = sym__concat;
	v->a[26249] = state(326);
	v->a[26250] = 1;
	v->a[26251] = aux_sym_concatenation_repeat1;
	v->a[26252] = actions(967);
	v->a[26253] = 25;
	v->a[26254] = anon_sym_PIPE;
	v->a[26255] = anon_sym_RPAREN;
	v->a[26256] = anon_sym_SEMI_SEMI;
	v->a[26257] = anon_sym_AMP_AMP;
	v->a[26258] = anon_sym_PIPE_PIPE;
	v->a[26259] = anon_sym_LT;
	small_parse_table_1313(v);
}

void	small_parse_table_1313(t_small_parse_table_array *v)
{
	v->a[26260] = anon_sym_GT;
	v->a[26261] = anon_sym_GT_GT;
	v->a[26262] = anon_sym_LT_AMP;
	v->a[26263] = anon_sym_GT_AMP;
	v->a[26264] = anon_sym_GT_PIPE;
	v->a[26265] = anon_sym_LT_GT;
	v->a[26266] = anon_sym_LT_LT;
	v->a[26267] = anon_sym_LT_LT_DASH;
	v->a[26268] = aux_sym_heredoc_redirect_token1;
	v->a[26269] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26270] = anon_sym_DOLLAR;
	v->a[26271] = anon_sym_DQUOTE;
	v->a[26272] = sym_raw_string;
	v->a[26273] = sym_number;
	v->a[26274] = anon_sym_DOLLAR_LBRACE;
	v->a[26275] = anon_sym_DOLLAR_LPAREN;
	v->a[26276] = anon_sym_BQUOTE;
	v->a[26277] = sym_word;
	v->a[26278] = anon_sym_SEMI;
	v->a[26279] = 6;
	small_parse_table_1314(v);
}

void	small_parse_table_1314(t_small_parse_table_array *v)
{
	v->a[26280] = actions(3);
	v->a[26281] = 1;
	v->a[26282] = sym_comment;
	v->a[26283] = actions(1005);
	v->a[26284] = 1;
	v->a[26285] = aux_sym_concatenation_token1;
	v->a[26286] = actions(1008);
	v->a[26287] = 1;
	v->a[26288] = sym__concat;
	v->a[26289] = actions(1011);
	v->a[26290] = 1;
	v->a[26291] = sym_variable_name;
	v->a[26292] = state(328);
	v->a[26293] = 1;
	v->a[26294] = aux_sym_concatenation_repeat1;
	v->a[26295] = actions(1003);
	v->a[26296] = 25;
	v->a[26297] = anon_sym_esac;
	v->a[26298] = anon_sym_PIPE;
	v->a[26299] = anon_sym_SEMI_SEMI;
	small_parse_table_1315(v);
}

/* EOF small_parse_table_262.c */
