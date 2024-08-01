/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_312.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1560(t_small_parse_table_array *v)
{
	v->a[31200] = sym__case_item_last;
	v->a[31201] = state(1538);
	v->a[31202] = 2;
	v->a[31203] = sym_concatenation;
	v->a[31204] = sym__extglob_blob;
	v->a[31205] = actions(774);
	v->a[31206] = 3;
	v->a[31207] = sym_raw_string;
	v->a[31208] = sym_number;
	v->a[31209] = sym_word;
	v->a[31210] = state(1468);
	v->a[31211] = 5;
	v->a[31212] = sym_arithmetic_expansion;
	v->a[31213] = sym_string;
	v->a[31214] = sym_simple_expansion;
	v->a[31215] = sym_expansion;
	v->a[31216] = sym_command_substitution;
	v->a[31217] = 6;
	v->a[31218] = actions(3);
	v->a[31219] = 1;
	small_parse_table_1561(v);
}

void	small_parse_table_1561(t_small_parse_table_array *v)
{
	v->a[31220] = sym_comment;
	v->a[31221] = actions(917);
	v->a[31222] = 1;
	v->a[31223] = sym_variable_name;
	v->a[31224] = actions(927);
	v->a[31225] = 1;
	v->a[31226] = aux_sym_concatenation_token1;
	v->a[31227] = actions(1009);
	v->a[31228] = 1;
	v->a[31229] = sym__concat;
	v->a[31230] = state(569);
	v->a[31231] = 1;
	v->a[31232] = aux_sym_concatenation_repeat1;
	v->a[31233] = actions(919);
	v->a[31234] = 17;
	v->a[31235] = anon_sym_PIPE;
	v->a[31236] = anon_sym_AMP_AMP;
	v->a[31237] = anon_sym_PIPE_PIPE;
	v->a[31238] = anon_sym_LT;
	v->a[31239] = anon_sym_GT;
	small_parse_table_1562(v);
}

void	small_parse_table_1562(t_small_parse_table_array *v)
{
	v->a[31240] = anon_sym_GT_GT;
	v->a[31241] = anon_sym_LT_LT;
	v->a[31242] = aux_sym_heredoc_redirect_token1;
	v->a[31243] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31244] = anon_sym_DOLLAR;
	v->a[31245] = anon_sym_DQUOTE;
	v->a[31246] = sym_raw_string;
	v->a[31247] = sym_number;
	v->a[31248] = anon_sym_DOLLAR_LBRACE;
	v->a[31249] = anon_sym_DOLLAR_LPAREN;
	v->a[31250] = anon_sym_BQUOTE;
	v->a[31251] = sym_word;
	v->a[31252] = 6;
	v->a[31253] = actions(3);
	v->a[31254] = 1;
	v->a[31255] = sym_comment;
	v->a[31256] = actions(1257);
	v->a[31257] = 1;
	v->a[31258] = sym_variable_name;
	v->a[31259] = actions(1292);
	small_parse_table_1563(v);
}

void	small_parse_table_1563(t_small_parse_table_array *v)
{
	v->a[31260] = 1;
	v->a[31261] = anon_sym_RPAREN;
	v->a[31262] = actions(1254);
	v->a[31263] = 3;
	v->a[31264] = anon_sym_LT;
	v->a[31265] = anon_sym_GT;
	v->a[31266] = anon_sym_GT_GT;
	v->a[31267] = actions(1249);
	v->a[31268] = 7;
	v->a[31269] = anon_sym_PIPE;
	v->a[31270] = anon_sym_SEMI_SEMI;
	v->a[31271] = anon_sym_AMP_AMP;
	v->a[31272] = anon_sym_PIPE_PIPE;
	v->a[31273] = anon_sym_LT_LT;
	v->a[31274] = aux_sym_heredoc_redirect_token1;
	v->a[31275] = anon_sym_SEMI;
	v->a[31276] = actions(1247);
	v->a[31277] = 9;
	v->a[31278] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31279] = anon_sym_DOLLAR;
	small_parse_table_1564(v);
}

void	small_parse_table_1564(t_small_parse_table_array *v)
{
	v->a[31280] = anon_sym_DQUOTE;
	v->a[31281] = sym_raw_string;
	v->a[31282] = sym_number;
	v->a[31283] = anon_sym_DOLLAR_LBRACE;
	v->a[31284] = anon_sym_DOLLAR_LPAREN;
	v->a[31285] = anon_sym_BQUOTE;
	v->a[31286] = sym_word;
	v->a[31287] = 5;
	v->a[31288] = actions(3);
	v->a[31289] = 1;
	v->a[31290] = sym_comment;
	v->a[31291] = actions(1257);
	v->a[31292] = 1;
	v->a[31293] = sym_variable_name;
	v->a[31294] = actions(1254);
	v->a[31295] = 3;
	v->a[31296] = anon_sym_LT;
	v->a[31297] = anon_sym_GT;
	v->a[31298] = anon_sym_GT_GT;
	v->a[31299] = actions(1249);
	small_parse_table_1565(v);
}

/* EOF small_parse_table_312.c */
