/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_664.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3320(t_small_parse_table_array *v)
{
	v->a[66400] = anon_sym_LT_LT;
	v->a[66401] = anon_sym_LT_LT_DASH;
	v->a[66402] = anon_sym_SEMI;
	v->a[66403] = 12;
	v->a[66404] = actions(3);
	v->a[66405] = 1;
	v->a[66406] = sym_comment;
	v->a[66407] = actions(1012);
	v->a[66408] = 1;
	v->a[66409] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66410] = actions(1014);
	v->a[66411] = 1;
	v->a[66412] = anon_sym_DOLLAR;
	v->a[66413] = actions(1016);
	v->a[66414] = 1;
	v->a[66415] = anon_sym_DQUOTE;
	v->a[66416] = actions(1018);
	v->a[66417] = 1;
	v->a[66418] = anon_sym_DOLLAR_LBRACE;
	v->a[66419] = actions(1020);
	small_parse_table_3321(v);
}

void	small_parse_table_3321(t_small_parse_table_array *v)
{
	v->a[66420] = 1;
	v->a[66421] = anon_sym_DOLLAR_LPAREN;
	v->a[66422] = actions(1022);
	v->a[66423] = 1;
	v->a[66424] = anon_sym_BQUOTE;
	v->a[66425] = actions(2645);
	v->a[66426] = 1;
	v->a[66427] = aux_sym_heredoc_redirect_token1;
	v->a[66428] = state(1250);
	v->a[66429] = 1;
	v->a[66430] = aux_sym__heredoc_command;
	v->a[66431] = state(1722);
	v->a[66432] = 1;
	v->a[66433] = sym_concatenation;
	v->a[66434] = actions(1002);
	v->a[66435] = 3;
	v->a[66436] = sym_raw_string;
	v->a[66437] = sym_number;
	v->a[66438] = sym_word;
	v->a[66439] = state(1516);
	small_parse_table_3322(v);
}

void	small_parse_table_3322(t_small_parse_table_array *v)
{
	v->a[66440] = 5;
	v->a[66441] = sym_arithmetic_expansion;
	v->a[66442] = sym_string;
	v->a[66443] = sym_simple_expansion;
	v->a[66444] = sym_expansion;
	v->a[66445] = sym_command_substitution;
	v->a[66446] = 3;
	v->a[66447] = actions(3);
	v->a[66448] = 1;
	v->a[66449] = sym_comment;
	v->a[66450] = actions(2221);
	v->a[66451] = 2;
	v->a[66452] = sym_file_descriptor;
	v->a[66453] = aux_sym_heredoc_redirect_token1;
	v->a[66454] = actions(2223);
	v->a[66455] = 15;
	v->a[66456] = anon_sym_esac;
	v->a[66457] = anon_sym_PIPE;
	v->a[66458] = anon_sym_SEMI_SEMI;
	v->a[66459] = anon_sym_AMP_AMP;
	small_parse_table_3323(v);
}

void	small_parse_table_3323(t_small_parse_table_array *v)
{
	v->a[66460] = anon_sym_PIPE_PIPE;
	v->a[66461] = anon_sym_LT;
	v->a[66462] = anon_sym_GT;
	v->a[66463] = anon_sym_GT_GT;
	v->a[66464] = anon_sym_LT_AMP;
	v->a[66465] = anon_sym_GT_AMP;
	v->a[66466] = anon_sym_GT_PIPE;
	v->a[66467] = anon_sym_LT_GT;
	v->a[66468] = anon_sym_LT_LT;
	v->a[66469] = anon_sym_LT_LT_DASH;
	v->a[66470] = anon_sym_SEMI;
	v->a[66471] = 3;
	v->a[66472] = actions(3);
	v->a[66473] = 1;
	v->a[66474] = sym_comment;
	v->a[66475] = actions(2221);
	v->a[66476] = 2;
	v->a[66477] = sym_file_descriptor;
	v->a[66478] = aux_sym_heredoc_redirect_token1;
	v->a[66479] = actions(2223);
	small_parse_table_3324(v);
}

void	small_parse_table_3324(t_small_parse_table_array *v)
{
	v->a[66480] = 15;
	v->a[66481] = anon_sym_esac;
	v->a[66482] = anon_sym_PIPE;
	v->a[66483] = anon_sym_SEMI_SEMI;
	v->a[66484] = anon_sym_AMP_AMP;
	v->a[66485] = anon_sym_PIPE_PIPE;
	v->a[66486] = anon_sym_LT;
	v->a[66487] = anon_sym_GT;
	v->a[66488] = anon_sym_GT_GT;
	v->a[66489] = anon_sym_LT_AMP;
	v->a[66490] = anon_sym_GT_AMP;
	v->a[66491] = anon_sym_GT_PIPE;
	v->a[66492] = anon_sym_LT_GT;
	v->a[66493] = anon_sym_LT_LT;
	v->a[66494] = anon_sym_LT_LT_DASH;
	v->a[66495] = anon_sym_SEMI;
	v->a[66496] = 3;
	v->a[66497] = actions(3);
	v->a[66498] = 1;
	v->a[66499] = sym_comment;
	small_parse_table_3325(v);
}

/* EOF small_parse_table_664.c */
