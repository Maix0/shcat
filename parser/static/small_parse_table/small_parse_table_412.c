/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_412.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2060(t_small_parse_table_array *v)
{
	v->a[41200] = anon_sym_GT_AMP;
	v->a[41201] = anon_sym_GT_PIPE;
	v->a[41202] = anon_sym_LT_GT;
	v->a[41203] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41204] = anon_sym_DOLLAR;
	v->a[41205] = anon_sym_DQUOTE;
	v->a[41206] = sym_raw_string;
	v->a[41207] = sym_number;
	v->a[41208] = anon_sym_DOLLAR_LBRACE;
	v->a[41209] = anon_sym_DOLLAR_LPAREN;
	v->a[41210] = anon_sym_BQUOTE;
	v->a[41211] = sym_word;
	v->a[41212] = 7;
	v->a[41213] = actions(3);
	v->a[41214] = 1;
	v->a[41215] = sym_comment;
	v->a[41216] = actions(1432);
	v->a[41217] = 1;
	v->a[41218] = sym_file_descriptor;
	v->a[41219] = actions(1435);
	small_parse_table_2061(v);
}

void	small_parse_table_2061(t_small_parse_table_array *v)
{
	v->a[41220] = 1;
	v->a[41221] = sym_variable_name;
	v->a[41222] = actions(1471);
	v->a[41223] = 1;
	v->a[41224] = anon_sym_RPAREN;
	v->a[41225] = actions(1429);
	v->a[41226] = 7;
	v->a[41227] = anon_sym_LT;
	v->a[41228] = anon_sym_GT;
	v->a[41229] = anon_sym_GT_GT;
	v->a[41230] = anon_sym_LT_AMP;
	v->a[41231] = anon_sym_GT_AMP;
	v->a[41232] = anon_sym_GT_PIPE;
	v->a[41233] = anon_sym_LT_GT;
	v->a[41234] = actions(1422);
	v->a[41235] = 9;
	v->a[41236] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41237] = anon_sym_DOLLAR;
	v->a[41238] = anon_sym_DQUOTE;
	v->a[41239] = sym_raw_string;
	small_parse_table_2062(v);
}

void	small_parse_table_2062(t_small_parse_table_array *v)
{
	v->a[41240] = sym_number;
	v->a[41241] = anon_sym_DOLLAR_LBRACE;
	v->a[41242] = anon_sym_DOLLAR_LPAREN;
	v->a[41243] = anon_sym_BQUOTE;
	v->a[41244] = sym_word;
	v->a[41245] = actions(1424);
	v->a[41246] = 9;
	v->a[41247] = anon_sym_PIPE;
	v->a[41248] = anon_sym_SEMI_SEMI;
	v->a[41249] = anon_sym_AMP_AMP;
	v->a[41250] = anon_sym_PIPE_PIPE;
	v->a[41251] = anon_sym_LT_LT;
	v->a[41252] = anon_sym_LT_LT_DASH;
	v->a[41253] = aux_sym_heredoc_redirect_token1;
	v->a[41254] = anon_sym_AMP;
	v->a[41255] = anon_sym_SEMI;
	v->a[41256] = 5;
	v->a[41257] = actions(3);
	v->a[41258] = 1;
	v->a[41259] = sym_comment;
	small_parse_table_2063(v);
}

void	small_parse_table_2063(t_small_parse_table_array *v)
{
	v->a[41260] = actions(746);
	v->a[41261] = 1;
	v->a[41262] = sym_variable_name;
	v->a[41263] = actions(1469);
	v->a[41264] = 1;
	v->a[41265] = sym_file_descriptor;
	v->a[41266] = actions(734);
	v->a[41267] = 9;
	v->a[41268] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41269] = anon_sym_DOLLAR;
	v->a[41270] = anon_sym_DQUOTE;
	v->a[41271] = sym_raw_string;
	v->a[41272] = sym_number;
	v->a[41273] = anon_sym_DOLLAR_LBRACE;
	v->a[41274] = anon_sym_DOLLAR_LPAREN;
	v->a[41275] = anon_sym_BQUOTE;
	v->a[41276] = sym_word;
	v->a[41277] = actions(1467);
	v->a[41278] = 17;
	v->a[41279] = anon_sym_esac;
	small_parse_table_2064(v);
}

void	small_parse_table_2064(t_small_parse_table_array *v)
{
	v->a[41280] = anon_sym_PIPE;
	v->a[41281] = anon_sym_SEMI_SEMI;
	v->a[41282] = anon_sym_AMP_AMP;
	v->a[41283] = anon_sym_PIPE_PIPE;
	v->a[41284] = anon_sym_LT;
	v->a[41285] = anon_sym_GT;
	v->a[41286] = anon_sym_GT_GT;
	v->a[41287] = anon_sym_LT_AMP;
	v->a[41288] = anon_sym_GT_AMP;
	v->a[41289] = anon_sym_GT_PIPE;
	v->a[41290] = anon_sym_LT_GT;
	v->a[41291] = anon_sym_LT_LT;
	v->a[41292] = anon_sym_LT_LT_DASH;
	v->a[41293] = aux_sym_heredoc_redirect_token1;
	v->a[41294] = anon_sym_AMP;
	v->a[41295] = anon_sym_SEMI;
	v->a[41296] = 16;
	v->a[41297] = actions(3);
	v->a[41298] = 1;
	v->a[41299] = sym_comment;
	small_parse_table_2065(v);
}

/* EOF small_parse_table_412.c */
