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
	v->a[44500] = sym_raw_string;
	v->a[44501] = sym_number;
	v->a[44502] = sym_word;
	v->a[44503] = state(711);
	v->a[44504] = 5;
	v->a[44505] = sym_arithmetic_expansion;
	v->a[44506] = sym_string;
	v->a[44507] = sym_simple_expansion;
	v->a[44508] = sym_expansion;
	v->a[44509] = sym_command_substitution;
	v->a[44510] = actions(1252);
	v->a[44511] = 6;
	v->a[44512] = anon_sym_LT;
	v->a[44513] = anon_sym_GT;
	v->a[44514] = anon_sym_GT_GT;
	v->a[44515] = anon_sym_LT_AMP;
	v->a[44516] = anon_sym_GT_AMP;
	v->a[44517] = anon_sym_GT_PIPE;
	v->a[44518] = 7;
	v->a[44519] = actions(3);
	small_parse_table_2226(v);
}

void	small_parse_table_2226(t_small_parse_table_array *v)
{
	v->a[44520] = 1;
	v->a[44521] = sym_comment;
	v->a[44522] = actions(1530);
	v->a[44523] = 1;
	v->a[44524] = sym_file_descriptor;
	v->a[44525] = actions(1533);
	v->a[44526] = 1;
	v->a[44527] = sym_variable_name;
	v->a[44528] = actions(1535);
	v->a[44529] = 1;
	v->a[44530] = anon_sym_RPAREN;
	v->a[44531] = actions(1527);
	v->a[44532] = 8;
	v->a[44533] = anon_sym_LT;
	v->a[44534] = anon_sym_GT;
	v->a[44535] = anon_sym_GT_GT;
	v->a[44536] = anon_sym_LT_AMP;
	v->a[44537] = anon_sym_GT_AMP;
	v->a[44538] = anon_sym_GT_PIPE;
	v->a[44539] = anon_sym_LT_AMP_DASH;
	small_parse_table_2227(v);
}

void	small_parse_table_2227(t_small_parse_table_array *v)
{
	v->a[44540] = anon_sym_GT_AMP_DASH;
	v->a[44541] = actions(1520);
	v->a[44542] = 9;
	v->a[44543] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44544] = anon_sym_DOLLAR;
	v->a[44545] = anon_sym_DQUOTE;
	v->a[44546] = sym_raw_string;
	v->a[44547] = sym_number;
	v->a[44548] = anon_sym_DOLLAR_LBRACE;
	v->a[44549] = anon_sym_DOLLAR_LPAREN;
	v->a[44550] = anon_sym_BQUOTE;
	v->a[44551] = sym_word;
	v->a[44552] = actions(1522);
	v->a[44553] = 9;
	v->a[44554] = anon_sym_PIPE;
	v->a[44555] = anon_sym_SEMI_SEMI;
	v->a[44556] = anon_sym_AMP_AMP;
	v->a[44557] = anon_sym_PIPE_PIPE;
	v->a[44558] = anon_sym_LT_LT;
	v->a[44559] = anon_sym_LT_LT_DASH;
	small_parse_table_2228(v);
}

void	small_parse_table_2228(t_small_parse_table_array *v)
{
	v->a[44560] = aux_sym_heredoc_redirect_token1;
	v->a[44561] = anon_sym_AMP;
	v->a[44562] = anon_sym_SEMI;
	v->a[44563] = 7;
	v->a[44564] = actions(3);
	v->a[44565] = 1;
	v->a[44566] = sym_comment;
	v->a[44567] = actions(1083);
	v->a[44568] = 1;
	v->a[44569] = aux_sym_concatenation_token1;
	v->a[44570] = actions(1185);
	v->a[44571] = 1;
	v->a[44572] = sym__concat;
	v->a[44573] = actions(1538);
	v->a[44574] = 1;
	v->a[44575] = anon_sym_LPAREN;
	v->a[44576] = state(765);
	v->a[44577] = 1;
	v->a[44578] = aux_sym_concatenation_repeat1;
	v->a[44579] = actions(1095);
	small_parse_table_2229(v);
}

void	small_parse_table_2229(t_small_parse_table_array *v)
{
	v->a[44580] = 2;
	v->a[44581] = sym_file_descriptor;
	v->a[44582] = sym__bare_dollar;
	v->a[44583] = actions(1097);
	v->a[44584] = 23;
	v->a[44585] = anon_sym_PIPE;
	v->a[44586] = anon_sym_AMP_AMP;
	v->a[44587] = anon_sym_PIPE_PIPE;
	v->a[44588] = anon_sym_LT;
	v->a[44589] = anon_sym_GT;
	v->a[44590] = anon_sym_GT_GT;
	v->a[44591] = anon_sym_LT_AMP;
	v->a[44592] = anon_sym_GT_AMP;
	v->a[44593] = anon_sym_GT_PIPE;
	v->a[44594] = anon_sym_LT_AMP_DASH;
	v->a[44595] = anon_sym_GT_AMP_DASH;
	v->a[44596] = anon_sym_LT_LT;
	v->a[44597] = anon_sym_LT_LT_DASH;
	v->a[44598] = aux_sym_heredoc_redirect_token1;
	v->a[44599] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2230(v);
}

/* EOF small_parse_table_445.c */
