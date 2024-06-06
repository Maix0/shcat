/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1152.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5760(t_small_parse_table_array *v)
{
	v->a[115200] = state(866);
	v->a[115201] = 7;
	v->a[115202] = sym_arithmetic_expansion;
	v->a[115203] = sym_brace_expression;
	v->a[115204] = sym_string;
	v->a[115205] = sym_number;
	v->a[115206] = sym_simple_expansion;
	v->a[115207] = sym_expansion;
	v->a[115208] = sym_command_substitution;
	v->a[115209] = 16;
	v->a[115210] = actions(3);
	v->a[115211] = 1;
	v->a[115212] = sym_comment;
	v->a[115213] = actions(1017);
	v->a[115214] = 1;
	v->a[115215] = aux_sym_number_token1;
	v->a[115216] = actions(1019);
	v->a[115217] = 1;
	v->a[115218] = aux_sym_number_token2;
	v->a[115219] = actions(1023);
	small_parse_table_5761(v);
}

void	small_parse_table_5761(t_small_parse_table_array *v)
{
	v->a[115220] = 1;
	v->a[115221] = anon_sym_DOLLAR_LPAREN;
	v->a[115222] = actions(1035);
	v->a[115223] = 1;
	v->a[115224] = sym__brace_start;
	v->a[115225] = actions(5763);
	v->a[115226] = 1;
	v->a[115227] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[115228] = actions(5767);
	v->a[115229] = 1;
	v->a[115230] = anon_sym_DQUOTE;
	v->a[115231] = actions(5771);
	v->a[115232] = 1;
	v->a[115233] = anon_sym_DOLLAR_LBRACE;
	v->a[115234] = actions(5773);
	v->a[115235] = 1;
	v->a[115236] = anon_sym_BQUOTE;
	v->a[115237] = actions(5775);
	v->a[115238] = 1;
	v->a[115239] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_5762(v);
}

void	small_parse_table_5762(t_small_parse_table_array *v)
{
	v->a[115240] = actions(6731);
	v->a[115241] = 1;
	v->a[115242] = sym_word;
	v->a[115243] = actions(6733);
	v->a[115244] = 1;
	v->a[115245] = anon_sym_DOLLAR;
	v->a[115246] = actions(6735);
	v->a[115247] = 1;
	v->a[115248] = sym__special_character;
	v->a[115249] = actions(6739);
	v->a[115250] = 1;
	v->a[115251] = sym__comment_word;
	v->a[115252] = actions(6737);
	v->a[115253] = 3;
	v->a[115254] = sym_test_operator;
	v->a[115255] = sym__bare_dollar;
	v->a[115256] = sym_raw_string;
	v->a[115257] = state(872);
	v->a[115258] = 7;
	v->a[115259] = sym_arithmetic_expansion;
	small_parse_table_5763(v);
}

void	small_parse_table_5763(t_small_parse_table_array *v)
{
	v->a[115260] = sym_brace_expression;
	v->a[115261] = sym_string;
	v->a[115262] = sym_number;
	v->a[115263] = sym_simple_expansion;
	v->a[115264] = sym_expansion;
	v->a[115265] = sym_command_substitution;
	v->a[115266] = 16;
	v->a[115267] = actions(3);
	v->a[115268] = 1;
	v->a[115269] = sym_comment;
	v->a[115270] = actions(5407);
	v->a[115271] = 1;
	v->a[115272] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[115273] = actions(5413);
	v->a[115274] = 1;
	v->a[115275] = anon_sym_DQUOTE;
	v->a[115276] = actions(5417);
	v->a[115277] = 1;
	v->a[115278] = aux_sym_number_token1;
	v->a[115279] = actions(5419);
	small_parse_table_5764(v);
}

void	small_parse_table_5764(t_small_parse_table_array *v)
{
	v->a[115280] = 1;
	v->a[115281] = aux_sym_number_token2;
	v->a[115282] = actions(5421);
	v->a[115283] = 1;
	v->a[115284] = anon_sym_DOLLAR_LBRACE;
	v->a[115285] = actions(5423);
	v->a[115286] = 1;
	v->a[115287] = anon_sym_DOLLAR_LPAREN;
	v->a[115288] = actions(5425);
	v->a[115289] = 1;
	v->a[115290] = anon_sym_BQUOTE;
	v->a[115291] = actions(5427);
	v->a[115292] = 1;
	v->a[115293] = anon_sym_DOLLAR_BQUOTE;
	v->a[115294] = actions(5433);
	v->a[115295] = 1;
	v->a[115296] = sym__brace_start;
	v->a[115297] = actions(6625);
	v->a[115298] = 1;
	v->a[115299] = sym_word;
	small_parse_table_5765(v);
}

/* EOF small_parse_table_1152.c */
