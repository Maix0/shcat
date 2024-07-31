/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_273.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1365(t_small_parse_table_array *v)
{
	v->a[27300] = anon_sym_BQUOTE;
	v->a[27301] = actions(1075);
	v->a[27302] = 1;
	v->a[27303] = sym__bare_dollar;
	v->a[27304] = state(338);
	v->a[27305] = 1;
	v->a[27306] = aux_sym_command_repeat2;
	v->a[27307] = state(750);
	v->a[27308] = 1;
	v->a[27309] = sym_concatenation;
	v->a[27310] = actions(1073);
	v->a[27311] = 3;
	v->a[27312] = sym_raw_string;
	v->a[27313] = sym_number;
	v->a[27314] = sym_word;
	v->a[27315] = state(630);
	v->a[27316] = 5;
	v->a[27317] = sym_arithmetic_expansion;
	v->a[27318] = sym_string;
	v->a[27319] = sym_simple_expansion;
	small_parse_table_1366(v);
}

void	small_parse_table_1366(t_small_parse_table_array *v)
{
	v->a[27320] = sym_expansion;
	v->a[27321] = sym_command_substitution;
	v->a[27322] = actions(537);
	v->a[27323] = 12;
	v->a[27324] = anon_sym_PIPE;
	v->a[27325] = anon_sym_AMP_AMP;
	v->a[27326] = anon_sym_PIPE_PIPE;
	v->a[27327] = anon_sym_LT;
	v->a[27328] = anon_sym_GT;
	v->a[27329] = anon_sym_GT_GT;
	v->a[27330] = anon_sym_LT_AMP;
	v->a[27331] = anon_sym_GT_AMP;
	v->a[27332] = anon_sym_GT_PIPE;
	v->a[27333] = anon_sym_LT_GT;
	v->a[27334] = anon_sym_LT_LT;
	v->a[27335] = anon_sym_LT_LT_DASH;
	v->a[27336] = 6;
	v->a[27337] = actions(3);
	v->a[27338] = 1;
	v->a[27339] = sym_comment;
	small_parse_table_1367(v);
}

void	small_parse_table_1367(t_small_parse_table_array *v)
{
	v->a[27340] = actions(1101);
	v->a[27341] = 1;
	v->a[27342] = aux_sym_concatenation_token1;
	v->a[27343] = actions(1104);
	v->a[27344] = 1;
	v->a[27345] = sym__concat;
	v->a[27346] = state(351);
	v->a[27347] = 1;
	v->a[27348] = aux_sym_concatenation_repeat1;
	v->a[27349] = actions(1011);
	v->a[27350] = 2;
	v->a[27351] = sym_variable_name;
	v->a[27352] = ts_builtin_sym_end;
	v->a[27353] = actions(1003);
	v->a[27354] = 24;
	v->a[27355] = anon_sym_PIPE;
	v->a[27356] = anon_sym_SEMI_SEMI;
	v->a[27357] = anon_sym_AMP_AMP;
	v->a[27358] = anon_sym_PIPE_PIPE;
	v->a[27359] = anon_sym_LT;
	small_parse_table_1368(v);
}

void	small_parse_table_1368(t_small_parse_table_array *v)
{
	v->a[27360] = anon_sym_GT;
	v->a[27361] = anon_sym_GT_GT;
	v->a[27362] = anon_sym_LT_AMP;
	v->a[27363] = anon_sym_GT_AMP;
	v->a[27364] = anon_sym_GT_PIPE;
	v->a[27365] = anon_sym_LT_GT;
	v->a[27366] = anon_sym_LT_LT;
	v->a[27367] = anon_sym_LT_LT_DASH;
	v->a[27368] = aux_sym_heredoc_redirect_token1;
	v->a[27369] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27370] = anon_sym_DOLLAR;
	v->a[27371] = anon_sym_DQUOTE;
	v->a[27372] = sym_raw_string;
	v->a[27373] = sym_number;
	v->a[27374] = anon_sym_DOLLAR_LBRACE;
	v->a[27375] = anon_sym_DOLLAR_LPAREN;
	v->a[27376] = anon_sym_BQUOTE;
	v->a[27377] = sym_word;
	v->a[27378] = anon_sym_SEMI;
	v->a[27379] = 6;
	small_parse_table_1369(v);
}

void	small_parse_table_1369(t_small_parse_table_array *v)
{
	v->a[27380] = actions(3);
	v->a[27381] = 1;
	v->a[27382] = sym_comment;
	v->a[27383] = actions(1013);
	v->a[27384] = 1;
	v->a[27385] = aux_sym_concatenation_token1;
	v->a[27386] = actions(1023);
	v->a[27387] = 1;
	v->a[27388] = sym_variable_name;
	v->a[27389] = actions(1107);
	v->a[27390] = 1;
	v->a[27391] = sym__concat;
	v->a[27392] = state(330);
	v->a[27393] = 1;
	v->a[27394] = aux_sym_concatenation_repeat1;
	v->a[27395] = actions(1025);
	v->a[27396] = 25;
	v->a[27397] = anon_sym_esac;
	v->a[27398] = anon_sym_PIPE;
	v->a[27399] = anon_sym_SEMI_SEMI;
	small_parse_table_1370(v);
}

/* EOF small_parse_table_273.c */
