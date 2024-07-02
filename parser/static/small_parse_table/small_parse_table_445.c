/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_445.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2225(t_small_parse_table_array *v)
{
	v->a[44500] = actions(3);
	v->a[44501] = 1;
	v->a[44502] = sym_comment;
	v->a[44503] = actions(1182);
	v->a[44504] = 1;
	v->a[44505] = aux_sym_concatenation_token1;
	v->a[44506] = actions(1238);
	v->a[44507] = 1;
	v->a[44508] = sym__concat;
	v->a[44509] = state(728);
	v->a[44510] = 1;
	v->a[44511] = aux_sym_concatenation_repeat1;
	v->a[44512] = actions(1229);
	v->a[44513] = 2;
	v->a[44514] = sym_file_descriptor;
	v->a[44515] = sym__bare_dollar;
	v->a[44516] = actions(1227);
	v->a[44517] = 22;
	v->a[44518] = anon_sym_PIPE;
	v->a[44519] = anon_sym_AMP_AMP;
	small_parse_table_2226(v);
}

void	small_parse_table_2226(t_small_parse_table_array *v)
{
	v->a[44520] = anon_sym_PIPE_PIPE;
	v->a[44521] = anon_sym_LT;
	v->a[44522] = anon_sym_GT;
	v->a[44523] = anon_sym_GT_GT;
	v->a[44524] = anon_sym_LT_AMP;
	v->a[44525] = anon_sym_GT_AMP;
	v->a[44526] = anon_sym_GT_PIPE;
	v->a[44527] = anon_sym_LT_GT;
	v->a[44528] = anon_sym_LT_LT;
	v->a[44529] = anon_sym_LT_LT_DASH;
	v->a[44530] = aux_sym_heredoc_redirect_token1;
	v->a[44531] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44532] = anon_sym_DOLLAR;
	v->a[44533] = anon_sym_DQUOTE;
	v->a[44534] = sym_raw_string;
	v->a[44535] = sym_number;
	v->a[44536] = anon_sym_DOLLAR_LBRACE;
	v->a[44537] = anon_sym_DOLLAR_LPAREN;
	v->a[44538] = anon_sym_BQUOTE;
	v->a[44539] = sym_word;
	small_parse_table_2227(v);
}

void	small_parse_table_2227(t_small_parse_table_array *v)
{
	v->a[44540] = 6;
	v->a[44541] = actions(3);
	v->a[44542] = 1;
	v->a[44543] = sym_comment;
	v->a[44544] = actions(1170);
	v->a[44545] = 1;
	v->a[44546] = aux_sym_concatenation_token1;
	v->a[44547] = actions(1207);
	v->a[44548] = 1;
	v->a[44549] = sym__concat;
	v->a[44550] = state(738);
	v->a[44551] = 1;
	v->a[44552] = aux_sym_concatenation_repeat1;
	v->a[44553] = actions(1194);
	v->a[44554] = 2;
	v->a[44555] = sym_file_descriptor;
	v->a[44556] = sym_variable_name;
	v->a[44557] = actions(1196);
	v->a[44558] = 22;
	v->a[44559] = anon_sym_PIPE;
	small_parse_table_2228(v);
}

void	small_parse_table_2228(t_small_parse_table_array *v)
{
	v->a[44560] = anon_sym_AMP_AMP;
	v->a[44561] = anon_sym_PIPE_PIPE;
	v->a[44562] = anon_sym_LT;
	v->a[44563] = anon_sym_GT;
	v->a[44564] = anon_sym_GT_GT;
	v->a[44565] = anon_sym_LT_AMP;
	v->a[44566] = anon_sym_GT_AMP;
	v->a[44567] = anon_sym_GT_PIPE;
	v->a[44568] = anon_sym_LT_GT;
	v->a[44569] = anon_sym_LT_LT;
	v->a[44570] = anon_sym_LT_LT_DASH;
	v->a[44571] = aux_sym_heredoc_redirect_token1;
	v->a[44572] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44573] = anon_sym_DOLLAR;
	v->a[44574] = anon_sym_DQUOTE;
	v->a[44575] = sym_raw_string;
	v->a[44576] = sym_number;
	v->a[44577] = anon_sym_DOLLAR_LBRACE;
	v->a[44578] = anon_sym_DOLLAR_LPAREN;
	v->a[44579] = anon_sym_BQUOTE;
	small_parse_table_2229(v);
}

void	small_parse_table_2229(t_small_parse_table_array *v)
{
	v->a[44580] = sym_word;
	v->a[44581] = 3;
	v->a[44582] = actions(3);
	v->a[44583] = 1;
	v->a[44584] = sym_comment;
	v->a[44585] = actions(1377);
	v->a[44586] = 2;
	v->a[44587] = sym_file_descriptor;
	v->a[44588] = sym_variable_name;
	v->a[44589] = actions(1375);
	v->a[44590] = 25;
	v->a[44591] = anon_sym_for;
	v->a[44592] = anon_sym_while;
	v->a[44593] = anon_sym_until;
	v->a[44594] = anon_sym_if;
	v->a[44595] = anon_sym_fi;
	v->a[44596] = anon_sym_case;
	v->a[44597] = anon_sym_LPAREN;
	v->a[44598] = anon_sym_LBRACE;
	v->a[44599] = anon_sym_BANG;
	small_parse_table_2230(v);
}

/* EOF small_parse_table_445.c */
