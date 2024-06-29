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
	v->a[27300] = sym_word;
	v->a[27301] = anon_sym_SEMI;
	v->a[27302] = 16;
	v->a[27303] = actions(3);
	v->a[27304] = 1;
	v->a[27305] = sym_comment;
	v->a[27306] = actions(335);
	v->a[27307] = 1;
	v->a[27308] = anon_sym_LPAREN;
	v->a[27309] = actions(491);
	v->a[27310] = 1;
	v->a[27311] = sym_file_descriptor;
	v->a[27312] = actions(969);
	v->a[27313] = 1;
	v->a[27314] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27315] = actions(971);
	v->a[27316] = 1;
	v->a[27317] = anon_sym_DOLLAR;
	v->a[27318] = actions(973);
	v->a[27319] = 1;
	small_parse_table_1366(v);
}

void	small_parse_table_1366(t_small_parse_table_array *v)
{
	v->a[27320] = anon_sym_DQUOTE;
	v->a[27321] = actions(975);
	v->a[27322] = 1;
	v->a[27323] = anon_sym_DOLLAR_LBRACE;
	v->a[27324] = actions(977);
	v->a[27325] = 1;
	v->a[27326] = anon_sym_DOLLAR_LPAREN;
	v->a[27327] = actions(979);
	v->a[27328] = 1;
	v->a[27329] = anon_sym_BQUOTE;
	v->a[27330] = actions(981);
	v->a[27331] = 1;
	v->a[27332] = sym__bare_dollar;
	v->a[27333] = state(434);
	v->a[27334] = 1;
	v->a[27335] = aux_sym_command_repeat2;
	v->a[27336] = state(949);
	v->a[27337] = 1;
	v->a[27338] = sym_concatenation;
	v->a[27339] = state(1608);
	small_parse_table_1367(v);
}

void	small_parse_table_1367(t_small_parse_table_array *v)
{
	v->a[27340] = 1;
	v->a[27341] = sym_subshell;
	v->a[27342] = actions(967);
	v->a[27343] = 3;
	v->a[27344] = sym_raw_string;
	v->a[27345] = sym_number;
	v->a[27346] = sym_word;
	v->a[27347] = state(830);
	v->a[27348] = 5;
	v->a[27349] = sym_arithmetic_expansion;
	v->a[27350] = sym_string;
	v->a[27351] = sym_simple_expansion;
	v->a[27352] = sym_expansion;
	v->a[27353] = sym_command_substitution;
	v->a[27354] = actions(493);
	v->a[27355] = 15;
	v->a[27356] = anon_sym_PIPE;
	v->a[27357] = anon_sym_AMP_AMP;
	v->a[27358] = anon_sym_PIPE_PIPE;
	v->a[27359] = anon_sym_LT;
	small_parse_table_1368(v);
}

void	small_parse_table_1368(t_small_parse_table_array *v)
{
	v->a[27360] = anon_sym_GT;
	v->a[27361] = anon_sym_GT_GT;
	v->a[27362] = anon_sym_AMP_GT;
	v->a[27363] = anon_sym_AMP_GT_GT;
	v->a[27364] = anon_sym_LT_AMP;
	v->a[27365] = anon_sym_GT_AMP;
	v->a[27366] = anon_sym_GT_PIPE;
	v->a[27367] = anon_sym_LT_AMP_DASH;
	v->a[27368] = anon_sym_GT_AMP_DASH;
	v->a[27369] = anon_sym_LT_LT;
	v->a[27370] = anon_sym_LT_LT_DASH;
	v->a[27371] = 7;
	v->a[27372] = actions(3);
	v->a[27373] = 1;
	v->a[27374] = sym_comment;
	v->a[27375] = actions(995);
	v->a[27376] = 1;
	v->a[27377] = anon_sym_LPAREN;
	v->a[27378] = actions(998);
	v->a[27379] = 1;
	small_parse_table_1369(v);
}

void	small_parse_table_1369(t_small_parse_table_array *v)
{
	v->a[27380] = aux_sym_concatenation_token1;
	v->a[27381] = actions(1002);
	v->a[27382] = 1;
	v->a[27383] = sym__concat;
	v->a[27384] = state(297);
	v->a[27385] = 1;
	v->a[27386] = aux_sym_concatenation_repeat1;
	v->a[27387] = actions(1000);
	v->a[27388] = 2;
	v->a[27389] = sym_file_descriptor;
	v->a[27390] = sym__bare_dollar;
	v->a[27391] = actions(993);
	v->a[27392] = 29;
	v->a[27393] = anon_sym_esac;
	v->a[27394] = anon_sym_PIPE;
	v->a[27395] = anon_sym_SEMI_SEMI;
	v->a[27396] = anon_sym_AMP_AMP;
	v->a[27397] = anon_sym_PIPE_PIPE;
	v->a[27398] = anon_sym_LT;
	v->a[27399] = anon_sym_GT;
	small_parse_table_1370(v);
}

/* EOF small_parse_table_273.c */
