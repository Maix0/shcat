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
	v->a[44500] = anon_sym_GT;
	v->a[44501] = anon_sym_GT_GT;
	v->a[44502] = anon_sym_LT_AMP;
	v->a[44503] = anon_sym_GT_AMP;
	v->a[44504] = anon_sym_GT_PIPE;
	v->a[44505] = anon_sym_LT_GT;
	v->a[44506] = anon_sym_LT_LT;
	v->a[44507] = anon_sym_LT_LT_DASH;
	v->a[44508] = aux_sym_concatenation_token1;
	v->a[44509] = anon_sym_BQUOTE;
	v->a[44510] = anon_sym_SEMI;
	v->a[44511] = 15;
	v->a[44512] = actions(3);
	v->a[44513] = 1;
	v->a[44514] = sym_comment;
	v->a[44515] = actions(1337);
	v->a[44516] = 1;
	v->a[44517] = anon_sym_LPAREN;
	v->a[44518] = actions(1341);
	v->a[44519] = 1;
	small_parse_table_2226(v);
}

void	small_parse_table_2226(t_small_parse_table_array *v)
{
	v->a[44520] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44521] = actions(1343);
	v->a[44522] = 1;
	v->a[44523] = anon_sym_DOLLAR;
	v->a[44524] = actions(1345);
	v->a[44525] = 1;
	v->a[44526] = anon_sym_DQUOTE;
	v->a[44527] = actions(1347);
	v->a[44528] = 1;
	v->a[44529] = anon_sym_DOLLAR_LBRACE;
	v->a[44530] = actions(1349);
	v->a[44531] = 1;
	v->a[44532] = anon_sym_DOLLAR_LPAREN;
	v->a[44533] = actions(1351);
	v->a[44534] = 1;
	v->a[44535] = anon_sym_BQUOTE;
	v->a[44536] = actions(1353);
	v->a[44537] = 1;
	v->a[44538] = sym_extglob_pattern;
	v->a[44539] = state(839);
	small_parse_table_2227(v);
}

void	small_parse_table_2227(t_small_parse_table_array *v)
{
	v->a[44540] = 1;
	v->a[44541] = aux_sym_case_statement_repeat1;
	v->a[44542] = state(1432);
	v->a[44543] = 1;
	v->a[44544] = sym_case_item;
	v->a[44545] = state(1697);
	v->a[44546] = 1;
	v->a[44547] = sym__case_item_last;
	v->a[44548] = state(1594);
	v->a[44549] = 2;
	v->a[44550] = sym_concatenation;
	v->a[44551] = sym__extglob_blob;
	v->a[44552] = actions(1333);
	v->a[44553] = 3;
	v->a[44554] = sym_raw_string;
	v->a[44555] = sym_number;
	v->a[44556] = sym_word;
	v->a[44557] = state(1520);
	v->a[44558] = 5;
	v->a[44559] = sym_arithmetic_expansion;
	small_parse_table_2228(v);
}

void	small_parse_table_2228(t_small_parse_table_array *v)
{
	v->a[44560] = sym_string;
	v->a[44561] = sym_simple_expansion;
	v->a[44562] = sym_expansion;
	v->a[44563] = sym_command_substitution;
	v->a[44564] = 3;
	v->a[44565] = actions(3);
	v->a[44566] = 1;
	v->a[44567] = sym_comment;
	v->a[44568] = actions(453);
	v->a[44569] = 4;
	v->a[44570] = sym__concat;
	v->a[44571] = sym_variable_name;
	v->a[44572] = ts_builtin_sym_end;
	v->a[44573] = aux_sym_heredoc_redirect_token1;
	v->a[44574] = actions(451);
	v->a[44575] = 17;
	v->a[44576] = anon_sym_PIPE;
	v->a[44577] = anon_sym_RPAREN;
	v->a[44578] = anon_sym_SEMI_SEMI;
	v->a[44579] = anon_sym_AMP_AMP;
	small_parse_table_2229(v);
}

void	small_parse_table_2229(t_small_parse_table_array *v)
{
	v->a[44580] = anon_sym_PIPE_PIPE;
	v->a[44581] = anon_sym_LT;
	v->a[44582] = anon_sym_GT;
	v->a[44583] = anon_sym_GT_GT;
	v->a[44584] = anon_sym_LT_AMP;
	v->a[44585] = anon_sym_GT_AMP;
	v->a[44586] = anon_sym_GT_PIPE;
	v->a[44587] = anon_sym_LT_GT;
	v->a[44588] = anon_sym_LT_LT;
	v->a[44589] = anon_sym_LT_LT_DASH;
	v->a[44590] = aux_sym_concatenation_token1;
	v->a[44591] = anon_sym_BQUOTE;
	v->a[44592] = anon_sym_SEMI;
	v->a[44593] = 3;
	v->a[44594] = actions(3);
	v->a[44595] = 1;
	v->a[44596] = sym_comment;
	v->a[44597] = actions(1147);
	v->a[44598] = 4;
	v->a[44599] = sym__concat;
	small_parse_table_2230(v);
}

/* EOF small_parse_table_445.c */
