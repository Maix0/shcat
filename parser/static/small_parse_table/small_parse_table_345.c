/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_345.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1725(t_small_parse_table_array *v)
{
	v->a[34500] = 1;
	v->a[34501] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34502] = actions(971);
	v->a[34503] = 1;
	v->a[34504] = anon_sym_DOLLAR;
	v->a[34505] = actions(973);
	v->a[34506] = 1;
	v->a[34507] = anon_sym_DQUOTE;
	v->a[34508] = actions(975);
	v->a[34509] = 1;
	v->a[34510] = anon_sym_DOLLAR_LBRACE;
	v->a[34511] = actions(977);
	v->a[34512] = 1;
	v->a[34513] = anon_sym_DOLLAR_LPAREN;
	v->a[34514] = actions(979);
	v->a[34515] = 1;
	v->a[34516] = anon_sym_BQUOTE;
	v->a[34517] = actions(981);
	v->a[34518] = 1;
	v->a[34519] = sym__bare_dollar;
	small_parse_table_1726(v);
}

void	small_parse_table_1726(t_small_parse_table_array *v)
{
	v->a[34520] = state(487);
	v->a[34521] = 1;
	v->a[34522] = aux_sym_command_repeat2;
	v->a[34523] = state(949);
	v->a[34524] = 1;
	v->a[34525] = sym_concatenation;
	v->a[34526] = actions(967);
	v->a[34527] = 3;
	v->a[34528] = sym_raw_string;
	v->a[34529] = sym_number;
	v->a[34530] = sym_word;
	v->a[34531] = state(830);
	v->a[34532] = 5;
	v->a[34533] = sym_arithmetic_expansion;
	v->a[34534] = sym_string;
	v->a[34535] = sym_simple_expansion;
	v->a[34536] = sym_expansion;
	v->a[34537] = sym_command_substitution;
	v->a[34538] = actions(550);
	v->a[34539] = 15;
	small_parse_table_1727(v);
}

void	small_parse_table_1727(t_small_parse_table_array *v)
{
	v->a[34540] = anon_sym_PIPE;
	v->a[34541] = anon_sym_AMP_AMP;
	v->a[34542] = anon_sym_PIPE_PIPE;
	v->a[34543] = anon_sym_LT;
	v->a[34544] = anon_sym_GT;
	v->a[34545] = anon_sym_GT_GT;
	v->a[34546] = anon_sym_AMP_GT;
	v->a[34547] = anon_sym_AMP_GT_GT;
	v->a[34548] = anon_sym_LT_AMP;
	v->a[34549] = anon_sym_GT_AMP;
	v->a[34550] = anon_sym_GT_PIPE;
	v->a[34551] = anon_sym_LT_AMP_DASH;
	v->a[34552] = anon_sym_GT_AMP_DASH;
	v->a[34553] = anon_sym_LT_LT;
	v->a[34554] = anon_sym_LT_LT_DASH;
	v->a[34555] = 3;
	v->a[34556] = actions(3);
	v->a[34557] = 1;
	v->a[34558] = sym_comment;
	v->a[34559] = actions(1126);
	small_parse_table_1728(v);
}

void	small_parse_table_1728(t_small_parse_table_array *v)
{
	v->a[34560] = 3;
	v->a[34561] = sym_file_descriptor;
	v->a[34562] = sym__concat;
	v->a[34563] = sym_variable_name;
	v->a[34564] = actions(1124);
	v->a[34565] = 30;
	v->a[34566] = anon_sym_esac;
	v->a[34567] = anon_sym_PIPE;
	v->a[34568] = anon_sym_SEMI_SEMI;
	v->a[34569] = anon_sym_AMP_AMP;
	v->a[34570] = anon_sym_PIPE_PIPE;
	v->a[34571] = anon_sym_LT;
	v->a[34572] = anon_sym_GT;
	v->a[34573] = anon_sym_GT_GT;
	v->a[34574] = anon_sym_AMP_GT;
	v->a[34575] = anon_sym_AMP_GT_GT;
	v->a[34576] = anon_sym_LT_AMP;
	v->a[34577] = anon_sym_GT_AMP;
	v->a[34578] = anon_sym_GT_PIPE;
	v->a[34579] = anon_sym_LT_AMP_DASH;
	small_parse_table_1729(v);
}

void	small_parse_table_1729(t_small_parse_table_array *v)
{
	v->a[34580] = anon_sym_GT_AMP_DASH;
	v->a[34581] = anon_sym_LT_LT;
	v->a[34582] = anon_sym_LT_LT_DASH;
	v->a[34583] = aux_sym_heredoc_redirect_token1;
	v->a[34584] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34585] = anon_sym_AMP;
	v->a[34586] = aux_sym_concatenation_token1;
	v->a[34587] = anon_sym_DOLLAR;
	v->a[34588] = anon_sym_DQUOTE;
	v->a[34589] = sym_raw_string;
	v->a[34590] = sym_number;
	v->a[34591] = anon_sym_DOLLAR_LBRACE;
	v->a[34592] = anon_sym_DOLLAR_LPAREN;
	v->a[34593] = anon_sym_BQUOTE;
	v->a[34594] = sym_word;
	v->a[34595] = anon_sym_SEMI;
	v->a[34596] = 17;
	v->a[34597] = actions(1074);
	v->a[34598] = 1;
	v->a[34599] = sym_comment;
	small_parse_table_1730(v);
}

/* EOF small_parse_table_345.c */
