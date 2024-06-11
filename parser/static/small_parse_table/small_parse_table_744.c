/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_744.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3720(t_small_parse_table_array *v)
{
	v->a[74400] = aux_sym_heredoc_redirect_token1;
	v->a[74401] = actions(2724);
	v->a[74402] = 20;
	v->a[74403] = anon_sym_PIPE;
	v->a[74404] = anon_sym_RPAREN;
	v->a[74405] = anon_sym_SEMI_SEMI;
	v->a[74406] = anon_sym_AMP_AMP;
	v->a[74407] = anon_sym_PIPE_PIPE;
	v->a[74408] = anon_sym_LT;
	v->a[74409] = anon_sym_GT;
	v->a[74410] = anon_sym_GT_GT;
	v->a[74411] = anon_sym_AMP_GT;
	v->a[74412] = anon_sym_AMP_GT_GT;
	v->a[74413] = anon_sym_LT_AMP;
	v->a[74414] = anon_sym_GT_AMP;
	v->a[74415] = anon_sym_GT_PIPE;
	v->a[74416] = anon_sym_LT_AMP_DASH;
	v->a[74417] = anon_sym_GT_AMP_DASH;
	v->a[74418] = anon_sym_LT_LT;
	v->a[74419] = anon_sym_LT_LT_DASH;
	small_parse_table_3721(v);
}

void	small_parse_table_3721(t_small_parse_table_array *v)
{
	v->a[74420] = anon_sym_AMP;
	v->a[74421] = anon_sym_BQUOTE;
	v->a[74422] = anon_sym_SEMI;
	v->a[74423] = 5;
	v->a[74424] = actions(3);
	v->a[74425] = 1;
	v->a[74426] = sym_comment;
	v->a[74427] = actions(811);
	v->a[74428] = 1;
	v->a[74429] = sym_file_descriptor;
	v->a[74430] = actions(1574);
	v->a[74431] = 1;
	v->a[74432] = sym_variable_name;
	v->a[74433] = state(1583);
	v->a[74434] = 2;
	v->a[74435] = sym_variable_assignment;
	v->a[74436] = aux_sym_variable_assignments_repeat1;
	v->a[74437] = actions(805);
	v->a[74438] = 19;
	v->a[74439] = anon_sym_LT;
	small_parse_table_3722(v);
}

void	small_parse_table_3722(t_small_parse_table_array *v)
{
	v->a[74440] = anon_sym_GT;
	v->a[74441] = anon_sym_GT_GT;
	v->a[74442] = anon_sym_AMP_GT;
	v->a[74443] = anon_sym_AMP_GT_GT;
	v->a[74444] = anon_sym_LT_AMP;
	v->a[74445] = anon_sym_GT_AMP;
	v->a[74446] = anon_sym_GT_PIPE;
	v->a[74447] = anon_sym_LT_AMP_DASH;
	v->a[74448] = anon_sym_GT_AMP_DASH;
	v->a[74449] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74450] = anon_sym_DOLLAR;
	v->a[74451] = anon_sym_DQUOTE;
	v->a[74452] = sym_raw_string;
	v->a[74453] = sym_number;
	v->a[74454] = anon_sym_DOLLAR_LBRACE;
	v->a[74455] = anon_sym_DOLLAR_LPAREN;
	v->a[74456] = anon_sym_BQUOTE;
	v->a[74457] = sym_word;
	v->a[74458] = 3;
	v->a[74459] = actions(3);
	small_parse_table_3723(v);
}

void	small_parse_table_3723(t_small_parse_table_array *v)
{
	v->a[74460] = 1;
	v->a[74461] = sym_comment;
	v->a[74462] = actions(1076);
	v->a[74463] = 3;
	v->a[74464] = sym_file_descriptor;
	v->a[74465] = sym__concat;
	v->a[74466] = aux_sym_heredoc_redirect_token1;
	v->a[74467] = actions(1074);
	v->a[74468] = 20;
	v->a[74469] = anon_sym_esac;
	v->a[74470] = anon_sym_PIPE;
	v->a[74471] = anon_sym_SEMI_SEMI;
	v->a[74472] = anon_sym_AMP_AMP;
	v->a[74473] = anon_sym_PIPE_PIPE;
	v->a[74474] = anon_sym_LT;
	v->a[74475] = anon_sym_GT;
	v->a[74476] = anon_sym_GT_GT;
	v->a[74477] = anon_sym_AMP_GT;
	v->a[74478] = anon_sym_AMP_GT_GT;
	v->a[74479] = anon_sym_LT_AMP;
	small_parse_table_3724(v);
}

void	small_parse_table_3724(t_small_parse_table_array *v)
{
	v->a[74480] = anon_sym_GT_AMP;
	v->a[74481] = anon_sym_GT_PIPE;
	v->a[74482] = anon_sym_LT_AMP_DASH;
	v->a[74483] = anon_sym_GT_AMP_DASH;
	v->a[74484] = anon_sym_LT_LT;
	v->a[74485] = anon_sym_LT_LT_DASH;
	v->a[74486] = anon_sym_AMP;
	v->a[74487] = aux_sym_concatenation_token1;
	v->a[74488] = anon_sym_SEMI;
	v->a[74489] = 3;
	v->a[74490] = actions(3);
	v->a[74491] = 1;
	v->a[74492] = sym_comment;
	v->a[74493] = actions(1141);
	v->a[74494] = 3;
	v->a[74495] = sym_file_descriptor;
	v->a[74496] = sym__concat;
	v->a[74497] = aux_sym_heredoc_redirect_token1;
	v->a[74498] = actions(1139);
	v->a[74499] = 20;
	small_parse_table_3725(v);
}

/* EOF small_parse_table_744.c */
