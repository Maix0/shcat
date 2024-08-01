/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_242.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1210(t_small_parse_table_array *v)
{
	v->a[24200] = actions(3);
	v->a[24201] = 1;
	v->a[24202] = sym_comment;
	v->a[24203] = actions(1044);
	v->a[24204] = 1;
	v->a[24205] = sym_variable_name;
	v->a[24206] = actions(1042);
	v->a[24207] = 2;
	v->a[24208] = anon_sym_esac;
	v->a[24209] = anon_sym_SEMI_SEMI;
	v->a[24210] = actions(1040);
	v->a[24211] = 20;
	v->a[24212] = anon_sym_for;
	v->a[24213] = anon_sym_while;
	v->a[24214] = anon_sym_until;
	v->a[24215] = anon_sym_if;
	v->a[24216] = anon_sym_case;
	v->a[24217] = anon_sym_LPAREN;
	v->a[24218] = anon_sym_LBRACE;
	v->a[24219] = anon_sym_BANG;
	small_parse_table_1211(v);
}

void	small_parse_table_1211(t_small_parse_table_array *v)
{
	v->a[24220] = anon_sym_LT;
	v->a[24221] = anon_sym_GT;
	v->a[24222] = anon_sym_GT_GT;
	v->a[24223] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24224] = anon_sym_DOLLAR;
	v->a[24225] = anon_sym_DQUOTE;
	v->a[24226] = sym_raw_string;
	v->a[24227] = sym_number;
	v->a[24228] = anon_sym_DOLLAR_LBRACE;
	v->a[24229] = anon_sym_DOLLAR_LPAREN;
	v->a[24230] = anon_sym_BQUOTE;
	v->a[24231] = sym_word;
	v->a[24232] = 5;
	v->a[24233] = actions(3);
	v->a[24234] = 1;
	v->a[24235] = sym_comment;
	v->a[24236] = actions(1118);
	v->a[24237] = 1;
	v->a[24238] = aux_sym_concatenation_token1;
	v->a[24239] = actions(1121);
	small_parse_table_1212(v);
}

void	small_parse_table_1212(t_small_parse_table_array *v)
{
	v->a[24240] = 1;
	v->a[24241] = sym__concat;
	v->a[24242] = state(337);
	v->a[24243] = 1;
	v->a[24244] = aux_sym_concatenation_repeat1;
	v->a[24245] = actions(973);
	v->a[24246] = 20;
	v->a[24247] = anon_sym_esac;
	v->a[24248] = anon_sym_PIPE;
	v->a[24249] = anon_sym_SEMI_SEMI;
	v->a[24250] = anon_sym_AMP_AMP;
	v->a[24251] = anon_sym_PIPE_PIPE;
	v->a[24252] = anon_sym_LT;
	v->a[24253] = anon_sym_GT;
	v->a[24254] = anon_sym_GT_GT;
	v->a[24255] = anon_sym_LT_LT;
	v->a[24256] = aux_sym_heredoc_redirect_token1;
	v->a[24257] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24258] = anon_sym_DOLLAR;
	v->a[24259] = anon_sym_DQUOTE;
	small_parse_table_1213(v);
}

void	small_parse_table_1213(t_small_parse_table_array *v)
{
	v->a[24260] = sym_raw_string;
	v->a[24261] = sym_number;
	v->a[24262] = anon_sym_DOLLAR_LBRACE;
	v->a[24263] = anon_sym_DOLLAR_LPAREN;
	v->a[24264] = anon_sym_BQUOTE;
	v->a[24265] = sym_word;
	v->a[24266] = anon_sym_SEMI;
	v->a[24267] = 3;
	v->a[24268] = actions(3);
	v->a[24269] = 1;
	v->a[24270] = sym_comment;
	v->a[24271] = actions(1046);
	v->a[24272] = 2;
	v->a[24273] = sym__concat;
	v->a[24274] = sym__bare_dollar;
	v->a[24275] = actions(1048);
	v->a[24276] = 21;
	v->a[24277] = anon_sym_esac;
	v->a[24278] = anon_sym_PIPE;
	v->a[24279] = anon_sym_SEMI_SEMI;
	small_parse_table_1214(v);
}

void	small_parse_table_1214(t_small_parse_table_array *v)
{
	v->a[24280] = anon_sym_AMP_AMP;
	v->a[24281] = anon_sym_PIPE_PIPE;
	v->a[24282] = anon_sym_LT;
	v->a[24283] = anon_sym_GT;
	v->a[24284] = anon_sym_GT_GT;
	v->a[24285] = anon_sym_LT_LT;
	v->a[24286] = aux_sym_heredoc_redirect_token1;
	v->a[24287] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24288] = aux_sym_concatenation_token1;
	v->a[24289] = anon_sym_DOLLAR;
	v->a[24290] = anon_sym_DQUOTE;
	v->a[24291] = sym_raw_string;
	v->a[24292] = sym_number;
	v->a[24293] = anon_sym_DOLLAR_LBRACE;
	v->a[24294] = anon_sym_DOLLAR_LPAREN;
	v->a[24295] = anon_sym_BQUOTE;
	v->a[24296] = sym_word;
	v->a[24297] = anon_sym_SEMI;
	v->a[24298] = 3;
	v->a[24299] = actions(3);
	small_parse_table_1215(v);
}

/* EOF small_parse_table_242.c */
