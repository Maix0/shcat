/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_762.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3810(t_small_parse_table_array *v)
{
	v->a[76200] = 3;
	v->a[76201] = actions(1074);
	v->a[76202] = 1;
	v->a[76203] = sym_comment;
	v->a[76204] = actions(1102);
	v->a[76205] = 7;
	v->a[76206] = anon_sym_PIPE;
	v->a[76207] = anon_sym_LT;
	v->a[76208] = anon_sym_GT;
	v->a[76209] = anon_sym_AMP_GT;
	v->a[76210] = anon_sym_LT_AMP;
	v->a[76211] = anon_sym_GT_AMP;
	v->a[76212] = anon_sym_LT_LT;
	v->a[76213] = actions(1104);
	v->a[76214] = 12;
	v->a[76215] = sym_file_descriptor;
	v->a[76216] = sym__concat;
	v->a[76217] = sym_variable_name;
	v->a[76218] = anon_sym_AMP_AMP;
	v->a[76219] = anon_sym_PIPE_PIPE;
	small_parse_table_3811(v);
}

void	small_parse_table_3811(t_small_parse_table_array *v)
{
	v->a[76220] = anon_sym_GT_GT;
	v->a[76221] = anon_sym_AMP_GT_GT;
	v->a[76222] = anon_sym_GT_PIPE;
	v->a[76223] = anon_sym_LT_AMP_DASH;
	v->a[76224] = anon_sym_GT_AMP_DASH;
	v->a[76225] = anon_sym_LT_LT_DASH;
	v->a[76226] = aux_sym_concatenation_token1;
	v->a[76227] = 5;
	v->a[76228] = actions(1074);
	v->a[76229] = 1;
	v->a[76230] = sym_comment;
	v->a[76231] = state(1414);
	v->a[76232] = 1;
	v->a[76233] = aux_sym_concatenation_repeat1;
	v->a[76234] = actions(2571);
	v->a[76235] = 2;
	v->a[76236] = sym__concat;
	v->a[76237] = aux_sym_concatenation_token1;
	v->a[76238] = actions(983);
	v->a[76239] = 7;
	small_parse_table_3812(v);
}

void	small_parse_table_3812(t_small_parse_table_array *v)
{
	v->a[76240] = anon_sym_PIPE;
	v->a[76241] = anon_sym_LT;
	v->a[76242] = anon_sym_GT;
	v->a[76243] = anon_sym_AMP_GT;
	v->a[76244] = anon_sym_LT_AMP;
	v->a[76245] = anon_sym_GT_AMP;
	v->a[76246] = anon_sym_LT_LT;
	v->a[76247] = actions(988);
	v->a[76248] = 9;
	v->a[76249] = sym_file_descriptor;
	v->a[76250] = anon_sym_AMP_AMP;
	v->a[76251] = anon_sym_PIPE_PIPE;
	v->a[76252] = anon_sym_GT_GT;
	v->a[76253] = anon_sym_AMP_GT_GT;
	v->a[76254] = anon_sym_GT_PIPE;
	v->a[76255] = anon_sym_LT_AMP_DASH;
	v->a[76256] = anon_sym_GT_AMP_DASH;
	v->a[76257] = anon_sym_LT_LT_DASH;
	v->a[76258] = 7;
	v->a[76259] = actions(3);
	small_parse_table_3813(v);
}

void	small_parse_table_3813(t_small_parse_table_array *v)
{
	v->a[76260] = 1;
	v->a[76261] = sym_comment;
	v->a[76262] = actions(2352);
	v->a[76263] = 1;
	v->a[76264] = aux_sym_heredoc_redirect_token1;
	v->a[76265] = actions(2574);
	v->a[76266] = 1;
	v->a[76267] = sym_file_descriptor;
	v->a[76268] = actions(2492);
	v->a[76269] = 2;
	v->a[76270] = anon_sym_LT_AMP_DASH;
	v->a[76271] = anon_sym_GT_AMP_DASH;
	v->a[76272] = state(1439);
	v->a[76273] = 2;
	v->a[76274] = sym_file_redirect;
	v->a[76275] = aux_sym_redirected_statement_repeat2;
	v->a[76276] = actions(2350);
	v->a[76277] = 5;
	v->a[76278] = anon_sym_PIPE;
	v->a[76279] = anon_sym_AMP_AMP;
	small_parse_table_3814(v);
}

void	small_parse_table_3814(t_small_parse_table_array *v)
{
	v->a[76280] = anon_sym_PIPE_PIPE;
	v->a[76281] = anon_sym_LT_LT;
	v->a[76282] = anon_sym_LT_LT_DASH;
	v->a[76283] = actions(2490);
	v->a[76284] = 8;
	v->a[76285] = anon_sym_LT;
	v->a[76286] = anon_sym_GT;
	v->a[76287] = anon_sym_GT_GT;
	v->a[76288] = anon_sym_AMP_GT;
	v->a[76289] = anon_sym_AMP_GT_GT;
	v->a[76290] = anon_sym_LT_AMP;
	v->a[76291] = anon_sym_GT_AMP;
	v->a[76292] = anon_sym_GT_PIPE;
	v->a[76293] = 3;
	v->a[76294] = actions(1074);
	v->a[76295] = 1;
	v->a[76296] = sym_comment;
	v->a[76297] = actions(1124);
	v->a[76298] = 7;
	v->a[76299] = anon_sym_PIPE;
	small_parse_table_3815(v);
}

/* EOF small_parse_table_762.c */
