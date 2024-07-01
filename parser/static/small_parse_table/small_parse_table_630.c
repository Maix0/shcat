/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_630.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3150(t_small_parse_table_array *v)
{
	v->a[63000] = actions(2071);
	v->a[63001] = 1;
	v->a[63002] = sym_variable_name;
	v->a[63003] = state(1097);
	v->a[63004] = 2;
	v->a[63005] = sym_variable_assignment;
	v->a[63006] = aux_sym__variable_assignments_repeat1;
	v->a[63007] = actions(2067);
	v->a[63008] = 3;
	v->a[63009] = sym_file_descriptor;
	v->a[63010] = ts_builtin_sym_end;
	v->a[63011] = aux_sym_heredoc_redirect_token1;
	v->a[63012] = actions(2069);
	v->a[63013] = 16;
	v->a[63014] = anon_sym_PIPE;
	v->a[63015] = anon_sym_SEMI_SEMI;
	v->a[63016] = anon_sym_AMP_AMP;
	v->a[63017] = anon_sym_PIPE_PIPE;
	v->a[63018] = anon_sym_LT;
	v->a[63019] = anon_sym_GT;
	small_parse_table_3151(v);
}

void	small_parse_table_3151(t_small_parse_table_array *v)
{
	v->a[63020] = anon_sym_GT_GT;
	v->a[63021] = anon_sym_LT_AMP;
	v->a[63022] = anon_sym_GT_AMP;
	v->a[63023] = anon_sym_GT_PIPE;
	v->a[63024] = anon_sym_LT_AMP_DASH;
	v->a[63025] = anon_sym_GT_AMP_DASH;
	v->a[63026] = anon_sym_LT_LT;
	v->a[63027] = anon_sym_LT_LT_DASH;
	v->a[63028] = anon_sym_AMP;
	v->a[63029] = anon_sym_SEMI;
	v->a[63030] = 16;
	v->a[63031] = actions(3);
	v->a[63032] = 1;
	v->a[63033] = sym_comment;
	v->a[63034] = actions(1774);
	v->a[63035] = 1;
	v->a[63036] = anon_sym_LPAREN;
	v->a[63037] = actions(1778);
	v->a[63038] = 1;
	v->a[63039] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3152(v);
}

void	small_parse_table_3152(t_small_parse_table_array *v)
{
	v->a[63040] = actions(1780);
	v->a[63041] = 1;
	v->a[63042] = anon_sym_DOLLAR;
	v->a[63043] = actions(1782);
	v->a[63044] = 1;
	v->a[63045] = anon_sym_DQUOTE;
	v->a[63046] = actions(1784);
	v->a[63047] = 1;
	v->a[63048] = anon_sym_DOLLAR_LBRACE;
	v->a[63049] = actions(1786);
	v->a[63050] = 1;
	v->a[63051] = anon_sym_DOLLAR_LPAREN;
	v->a[63052] = actions(1788);
	v->a[63053] = 1;
	v->a[63054] = anon_sym_BQUOTE;
	v->a[63055] = actions(1790);
	v->a[63056] = 1;
	v->a[63057] = sym_extglob_pattern;
	v->a[63058] = actions(1880);
	v->a[63059] = 1;
	small_parse_table_3153(v);
}

void	small_parse_table_3153(t_small_parse_table_array *v)
{
	v->a[63060] = anon_sym_esac;
	v->a[63061] = state(1244);
	v->a[63062] = 1;
	v->a[63063] = aux_sym_case_statement_repeat1;
	v->a[63064] = state(1920);
	v->a[63065] = 1;
	v->a[63066] = sym_case_item;
	v->a[63067] = state(2269);
	v->a[63068] = 1;
	v->a[63069] = sym__case_item_last;
	v->a[63070] = state(2096);
	v->a[63071] = 2;
	v->a[63072] = sym_concatenation;
	v->a[63073] = sym__extglob_blob;
	v->a[63074] = actions(1770);
	v->a[63075] = 3;
	v->a[63076] = sym_raw_string;
	v->a[63077] = sym_number;
	v->a[63078] = sym_word;
	v->a[63079] = state(2001);
	small_parse_table_3154(v);
}

void	small_parse_table_3154(t_small_parse_table_array *v)
{
	v->a[63080] = 5;
	v->a[63081] = sym_arithmetic_expansion;
	v->a[63082] = sym_string;
	v->a[63083] = sym_simple_expansion;
	v->a[63084] = sym_expansion;
	v->a[63085] = sym_command_substitution;
	v->a[63086] = 6;
	v->a[63087] = actions(3);
	v->a[63088] = 1;
	v->a[63089] = sym_comment;
	v->a[63090] = actions(2057);
	v->a[63091] = 1;
	v->a[63092] = aux_sym_concatenation_token1;
	v->a[63093] = actions(2059);
	v->a[63094] = 1;
	v->a[63095] = sym__concat;
	v->a[63096] = state(1150);
	v->a[63097] = 1;
	v->a[63098] = aux_sym_concatenation_repeat1;
	v->a[63099] = actions(602);
	small_parse_table_3155(v);
}

/* EOF small_parse_table_630.c */
