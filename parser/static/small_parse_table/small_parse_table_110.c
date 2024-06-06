/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_110.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_550(t_small_parse_table_array *v)
{
	v->a[11000] = 1;
	v->a[11001] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11002] = actions(1254);
	v->a[11003] = 1;
	v->a[11004] = anon_sym_DOLLAR;
	v->a[11005] = actions(1258);
	v->a[11006] = 1;
	v->a[11007] = anon_sym_DQUOTE;
	v->a[11008] = actions(1260);
	v->a[11009] = 1;
	v->a[11010] = aux_sym_number_token1;
	v->a[11011] = actions(1262);
	v->a[11012] = 1;
	v->a[11013] = aux_sym_number_token2;
	v->a[11014] = actions(1264);
	v->a[11015] = 1;
	v->a[11016] = anon_sym_DOLLAR_LBRACE;
	v->a[11017] = actions(1266);
	v->a[11018] = 1;
	v->a[11019] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_551(v);
}

void	small_parse_table_551(t_small_parse_table_array *v)
{
	v->a[11020] = actions(1268);
	v->a[11021] = 1;
	v->a[11022] = anon_sym_BQUOTE;
	v->a[11023] = actions(1270);
	v->a[11024] = 1;
	v->a[11025] = anon_sym_DOLLAR_BQUOTE;
	v->a[11026] = actions(1274);
	v->a[11027] = 1;
	v->a[11028] = sym__bare_dollar;
	v->a[11029] = actions(1276);
	v->a[11030] = 1;
	v->a[11031] = sym__brace_start;
	v->a[11032] = actions(1428);
	v->a[11033] = 1;
	v->a[11034] = sym__special_character;
	v->a[11035] = actions(1430);
	v->a[11036] = 1;
	v->a[11037] = sym_test_operator;
	v->a[11038] = state(406);
	v->a[11039] = 1;
	small_parse_table_552(v);
}

void	small_parse_table_552(t_small_parse_table_array *v)
{
	v->a[11040] = aux_sym_command_repeat2;
	v->a[11041] = state(1232);
	v->a[11042] = 1;
	v->a[11043] = aux_sym__literal_repeat1;
	v->a[11044] = state(1293);
	v->a[11045] = 1;
	v->a[11046] = sym_concatenation;
	v->a[11047] = actions(1339);
	v->a[11048] = 2;
	v->a[11049] = sym_file_descriptor;
	v->a[11050] = aux_sym_heredoc_redirect_token1;
	v->a[11051] = actions(1426);
	v->a[11052] = 2;
	v->a[11053] = sym_raw_string;
	v->a[11054] = sym_word;
	v->a[11055] = state(1146);
	v->a[11056] = 7;
	v->a[11057] = sym_arithmetic_expansion;
	v->a[11058] = sym_brace_expression;
	v->a[11059] = sym_string;
	small_parse_table_553(v);
}

void	small_parse_table_553(t_small_parse_table_array *v)
{
	v->a[11060] = sym_number;
	v->a[11061] = sym_simple_expansion;
	v->a[11062] = sym_expansion;
	v->a[11063] = sym_command_substitution;
	v->a[11064] = actions(1337);
	v->a[11065] = 19;
	v->a[11066] = anon_sym_PIPE;
	v->a[11067] = anon_sym_SEMI_SEMI;
	v->a[11068] = anon_sym_PIPE_AMP;
	v->a[11069] = anon_sym_AMP_AMP;
	v->a[11070] = anon_sym_PIPE_PIPE;
	v->a[11071] = anon_sym_LT;
	v->a[11072] = anon_sym_GT;
	v->a[11073] = anon_sym_GT_GT;
	v->a[11074] = anon_sym_AMP_GT;
	v->a[11075] = anon_sym_AMP_GT_GT;
	v->a[11076] = anon_sym_LT_AMP;
	v->a[11077] = anon_sym_GT_AMP;
	v->a[11078] = anon_sym_GT_PIPE;
	v->a[11079] = anon_sym_LT_AMP_DASH;
	small_parse_table_554(v);
}

void	small_parse_table_554(t_small_parse_table_array *v)
{
	v->a[11080] = anon_sym_GT_AMP_DASH;
	v->a[11081] = anon_sym_LT_LT;
	v->a[11082] = anon_sym_LT_LT_DASH;
	v->a[11083] = anon_sym_AMP;
	v->a[11084] = anon_sym_SEMI;
	v->a[11085] = 20;
	v->a[11086] = actions(3);
	v->a[11087] = 1;
	v->a[11088] = sym_comment;
	v->a[11089] = actions(1252);
	v->a[11090] = 1;
	v->a[11091] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11092] = actions(1254);
	v->a[11093] = 1;
	v->a[11094] = anon_sym_DOLLAR;
	v->a[11095] = actions(1258);
	v->a[11096] = 1;
	v->a[11097] = anon_sym_DQUOTE;
	v->a[11098] = actions(1260);
	v->a[11099] = 1;
	small_parse_table_555(v);
}

/* EOF small_parse_table_110.c */
