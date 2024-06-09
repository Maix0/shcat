/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_655.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3275(t_small_parse_table_array *v)
{
	v->a[65500] = actions(2129);
	v->a[65501] = 1;
	v->a[65502] = anon_sym_DOLLAR_LBRACE;
	v->a[65503] = actions(2131);
	v->a[65504] = 1;
	v->a[65505] = anon_sym_DOLLAR_LPAREN;
	v->a[65506] = actions(2133);
	v->a[65507] = 1;
	v->a[65508] = anon_sym_BQUOTE;
	v->a[65509] = actions(2135);
	v->a[65510] = 1;
	v->a[65511] = sym_extglob_pattern;
	v->a[65512] = actions(2147);
	v->a[65513] = 1;
	v->a[65514] = anon_sym_esac;
	v->a[65515] = state(1209);
	v->a[65516] = 1;
	v->a[65517] = aux_sym_case_statement_repeat1;
	v->a[65518] = state(1786);
	v->a[65519] = 1;
	small_parse_table_3276(v);
}

void	small_parse_table_3276(t_small_parse_table_array *v)
{
	v->a[65520] = sym_case_item;
	v->a[65521] = state(2249);
	v->a[65522] = 1;
	v->a[65523] = sym__case_item_last;
	v->a[65524] = actions(2111);
	v->a[65525] = 2;
	v->a[65526] = sym_raw_string;
	v->a[65527] = sym_word;
	v->a[65528] = state(2016);
	v->a[65529] = 2;
	v->a[65530] = sym_concatenation;
	v->a[65531] = sym__extglob_blob;
	v->a[65532] = state(1896);
	v->a[65533] = 6;
	v->a[65534] = sym_arithmetic_expansion;
	v->a[65535] = sym_string;
	v->a[65536] = sym_number;
	v->a[65537] = sym_simple_expansion;
	v->a[65538] = sym_expansion;
	v->a[65539] = sym_command_substitution;
	small_parse_table_3277(v);
}

void	small_parse_table_3277(t_small_parse_table_array *v)
{
	v->a[65540] = 3;
	v->a[65541] = actions(3);
	v->a[65542] = 1;
	v->a[65543] = sym_comment;
	v->a[65544] = actions(1241);
	v->a[65545] = 3;
	v->a[65546] = sym_file_descriptor;
	v->a[65547] = sym__concat;
	v->a[65548] = sym_variable_name;
	v->a[65549] = actions(1239);
	v->a[65550] = 21;
	v->a[65551] = anon_sym_LT;
	v->a[65552] = anon_sym_GT;
	v->a[65553] = anon_sym_GT_GT;
	v->a[65554] = anon_sym_AMP_GT;
	v->a[65555] = anon_sym_AMP_GT_GT;
	v->a[65556] = anon_sym_LT_AMP;
	v->a[65557] = anon_sym_GT_AMP;
	v->a[65558] = anon_sym_GT_PIPE;
	v->a[65559] = anon_sym_LT_AMP_DASH;
	small_parse_table_3278(v);
}

void	small_parse_table_3278(t_small_parse_table_array *v)
{
	v->a[65560] = anon_sym_GT_AMP_DASH;
	v->a[65561] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65562] = aux_sym_concatenation_token1;
	v->a[65563] = anon_sym_DOLLAR;
	v->a[65564] = anon_sym_DQUOTE;
	v->a[65565] = sym_raw_string;
	v->a[65566] = aux_sym_number_token1;
	v->a[65567] = aux_sym_number_token2;
	v->a[65568] = anon_sym_DOLLAR_LBRACE;
	v->a[65569] = anon_sym_DOLLAR_LPAREN;
	v->a[65570] = anon_sym_BQUOTE;
	v->a[65571] = sym_word;
	v->a[65572] = 5;
	v->a[65573] = actions(3);
	v->a[65574] = 1;
	v->a[65575] = sym_comment;
	v->a[65576] = actions(2362);
	v->a[65577] = 1;
	v->a[65578] = sym_variable_name;
	v->a[65579] = state(1074);
	small_parse_table_3279(v);
}

void	small_parse_table_3279(t_small_parse_table_array *v)
{
	v->a[65580] = 2;
	v->a[65581] = sym_variable_assignment;
	v->a[65582] = aux_sym_variable_assignments_repeat1;
	v->a[65583] = actions(2256);
	v->a[65584] = 3;
	v->a[65585] = sym_file_descriptor;
	v->a[65586] = ts_builtin_sym_end;
	v->a[65587] = aux_sym_heredoc_redirect_token1;
	v->a[65588] = actions(2254);
	v->a[65589] = 18;
	v->a[65590] = anon_sym_PIPE;
	v->a[65591] = anon_sym_SEMI_SEMI;
	v->a[65592] = anon_sym_AMP_AMP;
	v->a[65593] = anon_sym_PIPE_PIPE;
	v->a[65594] = anon_sym_LT;
	v->a[65595] = anon_sym_GT;
	v->a[65596] = anon_sym_GT_GT;
	v->a[65597] = anon_sym_AMP_GT;
	v->a[65598] = anon_sym_AMP_GT_GT;
	v->a[65599] = anon_sym_LT_AMP;
	small_parse_table_3280(v);
}

/* EOF small_parse_table_655.c */
