/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_912.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4560(t_small_parse_table_array *v)
{
	v->a[91200] = anon_sym_GT_LPAREN;
	v->a[91201] = 3;
	v->a[91202] = actions(3);
	v->a[91203] = 1;
	v->a[91204] = sym_comment;
	v->a[91205] = actions(4554);
	v->a[91206] = 5;
	v->a[91207] = sym_file_descriptor;
	v->a[91208] = sym_variable_name;
	v->a[91209] = sym_test_operator;
	v->a[91210] = sym__brace_start;
	v->a[91211] = aux_sym_heredoc_redirect_token1;
	v->a[91212] = actions(4552);
	v->a[91213] = 39;
	v->a[91214] = anon_sym_LPAREN_LPAREN;
	v->a[91215] = anon_sym_SEMI;
	v->a[91216] = anon_sym_PIPE_PIPE;
	v->a[91217] = anon_sym_AMP_AMP;
	v->a[91218] = anon_sym_PIPE;
	v->a[91219] = anon_sym_AMP;
	small_parse_table_4561(v);
}

void	small_parse_table_4561(t_small_parse_table_array *v)
{
	v->a[91220] = anon_sym_LT;
	v->a[91221] = anon_sym_GT;
	v->a[91222] = anon_sym_LT_LT;
	v->a[91223] = anon_sym_GT_GT;
	v->a[91224] = anon_sym_SEMI_SEMI;
	v->a[91225] = anon_sym_SEMI_AMP;
	v->a[91226] = anon_sym_SEMI_SEMI_AMP;
	v->a[91227] = anon_sym_PIPE_AMP;
	v->a[91228] = anon_sym_AMP_GT;
	v->a[91229] = anon_sym_AMP_GT_GT;
	v->a[91230] = anon_sym_LT_AMP;
	v->a[91231] = anon_sym_GT_AMP;
	v->a[91232] = anon_sym_GT_PIPE;
	v->a[91233] = anon_sym_LT_AMP_DASH;
	v->a[91234] = anon_sym_GT_AMP_DASH;
	v->a[91235] = anon_sym_LT_LT_DASH;
	v->a[91236] = anon_sym_LT_LT_LT;
	v->a[91237] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[91238] = anon_sym_DOLLAR_LBRACK;
	v->a[91239] = anon_sym_DOLLAR;
	small_parse_table_4562(v);
}

void	small_parse_table_4562(t_small_parse_table_array *v)
{
	v->a[91240] = sym__special_character;
	v->a[91241] = anon_sym_DQUOTE;
	v->a[91242] = sym_raw_string;
	v->a[91243] = sym_ansi_c_string;
	v->a[91244] = aux_sym_number_token1;
	v->a[91245] = aux_sym_number_token2;
	v->a[91246] = anon_sym_DOLLAR_LBRACE;
	v->a[91247] = anon_sym_DOLLAR_LPAREN;
	v->a[91248] = anon_sym_BQUOTE;
	v->a[91249] = anon_sym_DOLLAR_BQUOTE;
	v->a[91250] = anon_sym_LT_LPAREN;
	v->a[91251] = anon_sym_GT_LPAREN;
	v->a[91252] = sym_word;
	v->a[91253] = 27;
	v->a[91254] = actions(71);
	v->a[91255] = 1;
	v->a[91256] = sym_comment;
	v->a[91257] = actions(1131);
	v->a[91258] = 1;
	v->a[91259] = anon_sym_LPAREN;
	small_parse_table_4563(v);
}

void	small_parse_table_4563(t_small_parse_table_array *v)
{
	v->a[91260] = actions(1141);
	v->a[91261] = 1;
	v->a[91262] = anon_sym_DOLLAR_LBRACK;
	v->a[91263] = actions(1145);
	v->a[91264] = 1;
	v->a[91265] = anon_sym_DOLLAR;
	v->a[91266] = actions(1149);
	v->a[91267] = 1;
	v->a[91268] = anon_sym_DQUOTE;
	v->a[91269] = actions(1153);
	v->a[91270] = 1;
	v->a[91271] = aux_sym_number_token1;
	v->a[91272] = actions(1155);
	v->a[91273] = 1;
	v->a[91274] = aux_sym_number_token2;
	v->a[91275] = actions(1157);
	v->a[91276] = 1;
	v->a[91277] = anon_sym_DOLLAR_LBRACE;
	v->a[91278] = actions(1159);
	v->a[91279] = 1;
	small_parse_table_4564(v);
}

void	small_parse_table_4564(t_small_parse_table_array *v)
{
	v->a[91280] = anon_sym_DOLLAR_LPAREN;
	v->a[91281] = actions(1163);
	v->a[91282] = 1;
	v->a[91283] = anon_sym_DOLLAR_BQUOTE;
	v->a[91284] = actions(1169);
	v->a[91285] = 1;
	v->a[91286] = sym__brace_start;
	v->a[91287] = actions(1187);
	v->a[91288] = 1;
	v->a[91289] = sym_word;
	v->a[91290] = actions(1189);
	v->a[91291] = 1;
	v->a[91292] = anon_sym_BANG;
	v->a[91293] = actions(1195);
	v->a[91294] = 1;
	v->a[91295] = anon_sym_TILDE;
	v->a[91296] = actions(1201);
	v->a[91297] = 1;
	v->a[91298] = sym_test_operator;
	v->a[91299] = actions(3060);
	small_parse_table_4565(v);
}

/* EOF small_parse_table_912.c */
