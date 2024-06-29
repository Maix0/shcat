/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_228.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1140(t_small_parse_table_array *v)
{
	v->a[22800] = anon_sym_DOLLAR_LPAREN;
	v->a[22801] = actions(533);
	v->a[22802] = 1;
	v->a[22803] = anon_sym_BQUOTE;
	v->a[22804] = actions(536);
	v->a[22805] = 2;
	v->a[22806] = sym_file_descriptor;
	v->a[22807] = sym_variable_name;
	v->a[22808] = state(212);
	v->a[22809] = 2;
	v->a[22810] = sym_concatenation;
	v->a[22811] = aux_sym_for_statement_repeat1;
	v->a[22812] = actions(678);
	v->a[22813] = 3;
	v->a[22814] = sym_raw_string;
	v->a[22815] = sym_number;
	v->a[22816] = sym_word;
	v->a[22817] = state(458);
	v->a[22818] = 5;
	v->a[22819] = sym_arithmetic_expansion;
	small_parse_table_1141(v);
}

void	small_parse_table_1141(t_small_parse_table_array *v)
{
	v->a[22820] = sym_string;
	v->a[22821] = sym_simple_expansion;
	v->a[22822] = sym_expansion;
	v->a[22823] = sym_command_substitution;
	v->a[22824] = actions(516);
	v->a[22825] = 19;
	v->a[22826] = anon_sym_PIPE;
	v->a[22827] = anon_sym_SEMI_SEMI;
	v->a[22828] = anon_sym_AMP_AMP;
	v->a[22829] = anon_sym_PIPE_PIPE;
	v->a[22830] = anon_sym_LT;
	v->a[22831] = anon_sym_GT;
	v->a[22832] = anon_sym_GT_GT;
	v->a[22833] = anon_sym_AMP_GT;
	v->a[22834] = anon_sym_AMP_GT_GT;
	v->a[22835] = anon_sym_LT_AMP;
	v->a[22836] = anon_sym_GT_AMP;
	v->a[22837] = anon_sym_GT_PIPE;
	v->a[22838] = anon_sym_LT_AMP_DASH;
	v->a[22839] = anon_sym_GT_AMP_DASH;
	small_parse_table_1142(v);
}

void	small_parse_table_1142(t_small_parse_table_array *v)
{
	v->a[22840] = anon_sym_LT_LT;
	v->a[22841] = anon_sym_LT_LT_DASH;
	v->a[22842] = aux_sym_heredoc_redirect_token1;
	v->a[22843] = anon_sym_AMP;
	v->a[22844] = anon_sym_SEMI;
	v->a[22845] = 12;
	v->a[22846] = actions(3);
	v->a[22847] = 1;
	v->a[22848] = sym_comment;
	v->a[22849] = actions(536);
	v->a[22850] = 1;
	v->a[22851] = sym_file_descriptor;
	v->a[22852] = actions(684);
	v->a[22853] = 1;
	v->a[22854] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22855] = actions(687);
	v->a[22856] = 1;
	v->a[22857] = anon_sym_DOLLAR;
	v->a[22858] = actions(690);
	v->a[22859] = 1;
	small_parse_table_1143(v);
}

void	small_parse_table_1143(t_small_parse_table_array *v)
{
	v->a[22860] = anon_sym_DQUOTE;
	v->a[22861] = actions(693);
	v->a[22862] = 1;
	v->a[22863] = anon_sym_DOLLAR_LBRACE;
	v->a[22864] = actions(696);
	v->a[22865] = 1;
	v->a[22866] = anon_sym_DOLLAR_LPAREN;
	v->a[22867] = actions(699);
	v->a[22868] = 1;
	v->a[22869] = anon_sym_BQUOTE;
	v->a[22870] = state(213);
	v->a[22871] = 2;
	v->a[22872] = sym_concatenation;
	v->a[22873] = aux_sym_for_statement_repeat1;
	v->a[22874] = actions(681);
	v->a[22875] = 3;
	v->a[22876] = sym_raw_string;
	v->a[22877] = sym_number;
	v->a[22878] = sym_word;
	v->a[22879] = state(506);
	small_parse_table_1144(v);
}

void	small_parse_table_1144(t_small_parse_table_array *v)
{
	v->a[22880] = 5;
	v->a[22881] = sym_arithmetic_expansion;
	v->a[22882] = sym_string;
	v->a[22883] = sym_simple_expansion;
	v->a[22884] = sym_expansion;
	v->a[22885] = sym_command_substitution;
	v->a[22886] = actions(516);
	v->a[22887] = 20;
	v->a[22888] = anon_sym_esac;
	v->a[22889] = anon_sym_PIPE;
	v->a[22890] = anon_sym_SEMI_SEMI;
	v->a[22891] = anon_sym_AMP_AMP;
	v->a[22892] = anon_sym_PIPE_PIPE;
	v->a[22893] = anon_sym_LT;
	v->a[22894] = anon_sym_GT;
	v->a[22895] = anon_sym_GT_GT;
	v->a[22896] = anon_sym_AMP_GT;
	v->a[22897] = anon_sym_AMP_GT_GT;
	v->a[22898] = anon_sym_LT_AMP;
	v->a[22899] = anon_sym_GT_AMP;
	small_parse_table_1145(v);
}

/* EOF small_parse_table_228.c */
