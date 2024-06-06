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
	v->a[91200] = anon_sym_LT;
	v->a[91201] = anon_sym_GT;
	v->a[91202] = anon_sym_GT_GT;
	v->a[91203] = anon_sym_AMP_GT;
	v->a[91204] = anon_sym_AMP_GT_GT;
	v->a[91205] = anon_sym_LT_AMP;
	v->a[91206] = anon_sym_GT_AMP;
	v->a[91207] = anon_sym_GT_PIPE;
	v->a[91208] = anon_sym_LT_AMP_DASH;
	v->a[91209] = anon_sym_GT_AMP_DASH;
	v->a[91210] = anon_sym_LT_LT;
	v->a[91211] = anon_sym_LT_LT_DASH;
	v->a[91212] = anon_sym_AMP;
	v->a[91213] = sym__special_character;
	v->a[91214] = anon_sym_SEMI;
	v->a[91215] = 6;
	v->a[91216] = actions(3);
	v->a[91217] = 1;
	v->a[91218] = sym_comment;
	v->a[91219] = actions(5080);
	small_parse_table_4561(v);
}

void	small_parse_table_4561(t_small_parse_table_array *v)
{
	v->a[91220] = 1;
	v->a[91221] = aux_sym_concatenation_token1;
	v->a[91222] = actions(5083);
	v->a[91223] = 1;
	v->a[91224] = sym__concat;
	v->a[91225] = state(1859);
	v->a[91226] = 1;
	v->a[91227] = aux_sym_concatenation_repeat1;
	v->a[91228] = actions(2654);
	v->a[91229] = 3;
	v->a[91230] = sym_file_descriptor;
	v->a[91231] = sym_variable_name;
	v->a[91232] = aux_sym_heredoc_redirect_token1;
	v->a[91233] = actions(2652);
	v->a[91234] = 22;
	v->a[91235] = anon_sym_esac;
	v->a[91236] = anon_sym_PIPE;
	v->a[91237] = anon_sym_SEMI_SEMI;
	v->a[91238] = anon_sym_SEMI_AMP;
	v->a[91239] = anon_sym_SEMI_SEMI_AMP;
	small_parse_table_4562(v);
}

void	small_parse_table_4562(t_small_parse_table_array *v)
{
	v->a[91240] = anon_sym_PIPE_AMP;
	v->a[91241] = anon_sym_AMP_AMP;
	v->a[91242] = anon_sym_PIPE_PIPE;
	v->a[91243] = anon_sym_LT;
	v->a[91244] = anon_sym_GT;
	v->a[91245] = anon_sym_GT_GT;
	v->a[91246] = anon_sym_AMP_GT;
	v->a[91247] = anon_sym_AMP_GT_GT;
	v->a[91248] = anon_sym_LT_AMP;
	v->a[91249] = anon_sym_GT_AMP;
	v->a[91250] = anon_sym_GT_PIPE;
	v->a[91251] = anon_sym_LT_AMP_DASH;
	v->a[91252] = anon_sym_GT_AMP_DASH;
	v->a[91253] = anon_sym_LT_LT;
	v->a[91254] = anon_sym_LT_LT_DASH;
	v->a[91255] = anon_sym_AMP;
	v->a[91256] = anon_sym_SEMI;
	v->a[91257] = 19;
	v->a[91258] = actions(3);
	v->a[91259] = 1;
	small_parse_table_4563(v);
}

void	small_parse_table_4563(t_small_parse_table_array *v)
{
	v->a[91260] = sym_comment;
	v->a[91261] = actions(2458);
	v->a[91262] = 1;
	v->a[91263] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[91264] = actions(2460);
	v->a[91265] = 1;
	v->a[91266] = anon_sym_DOLLAR;
	v->a[91267] = actions(2464);
	v->a[91268] = 1;
	v->a[91269] = anon_sym_DQUOTE;
	v->a[91270] = actions(2466);
	v->a[91271] = 1;
	v->a[91272] = aux_sym_number_token1;
	v->a[91273] = actions(2468);
	v->a[91274] = 1;
	v->a[91275] = aux_sym_number_token2;
	v->a[91276] = actions(2470);
	v->a[91277] = 1;
	v->a[91278] = anon_sym_DOLLAR_LBRACE;
	v->a[91279] = actions(2472);
	small_parse_table_4564(v);
}

void	small_parse_table_4564(t_small_parse_table_array *v)
{
	v->a[91280] = 1;
	v->a[91281] = anon_sym_DOLLAR_LPAREN;
	v->a[91282] = actions(2474);
	v->a[91283] = 1;
	v->a[91284] = anon_sym_BQUOTE;
	v->a[91285] = actions(2476);
	v->a[91286] = 1;
	v->a[91287] = anon_sym_DOLLAR_BQUOTE;
	v->a[91288] = actions(2482);
	v->a[91289] = 1;
	v->a[91290] = sym__brace_start;
	v->a[91291] = actions(5072);
	v->a[91292] = 1;
	v->a[91293] = sym__special_character;
	v->a[91294] = actions(5074);
	v->a[91295] = 1;
	v->a[91296] = sym_test_operator;
	v->a[91297] = actions(5088);
	v->a[91298] = 1;
	v->a[91299] = aux_sym_heredoc_redirect_token1;
	small_parse_table_4565(v);
}

/* EOF small_parse_table_912.c */
