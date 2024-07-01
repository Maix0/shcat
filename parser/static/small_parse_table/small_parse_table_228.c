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
	v->a[22800] = 5;
	v->a[22801] = sym_arithmetic_expansion;
	v->a[22802] = sym_string;
	v->a[22803] = sym_simple_expansion;
	v->a[22804] = sym_expansion;
	v->a[22805] = sym_command_substitution;
	v->a[22806] = actions(604);
	v->a[22807] = 18;
	v->a[22808] = anon_sym_esac;
	v->a[22809] = anon_sym_PIPE;
	v->a[22810] = anon_sym_SEMI_SEMI;
	v->a[22811] = anon_sym_AMP_AMP;
	v->a[22812] = anon_sym_PIPE_PIPE;
	v->a[22813] = anon_sym_LT;
	v->a[22814] = anon_sym_GT;
	v->a[22815] = anon_sym_GT_GT;
	v->a[22816] = anon_sym_LT_AMP;
	v->a[22817] = anon_sym_GT_AMP;
	v->a[22818] = anon_sym_GT_PIPE;
	v->a[22819] = anon_sym_LT_AMP_DASH;
	small_parse_table_1141(v);
}

void	small_parse_table_1141(t_small_parse_table_array *v)
{
	v->a[22820] = anon_sym_GT_AMP_DASH;
	v->a[22821] = anon_sym_LT_LT;
	v->a[22822] = anon_sym_LT_LT_DASH;
	v->a[22823] = aux_sym_heredoc_redirect_token1;
	v->a[22824] = anon_sym_AMP;
	v->a[22825] = anon_sym_SEMI;
	v->a[22826] = 12;
	v->a[22827] = actions(3);
	v->a[22828] = 1;
	v->a[22829] = sym_comment;
	v->a[22830] = actions(577);
	v->a[22831] = 1;
	v->a[22832] = sym_file_descriptor;
	v->a[22833] = actions(732);
	v->a[22834] = 1;
	v->a[22835] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22836] = actions(735);
	v->a[22837] = 1;
	v->a[22838] = anon_sym_DOLLAR;
	v->a[22839] = actions(738);
	small_parse_table_1142(v);
}

void	small_parse_table_1142(t_small_parse_table_array *v)
{
	v->a[22840] = 1;
	v->a[22841] = anon_sym_DQUOTE;
	v->a[22842] = actions(741);
	v->a[22843] = 1;
	v->a[22844] = anon_sym_DOLLAR_LBRACE;
	v->a[22845] = actions(744);
	v->a[22846] = 1;
	v->a[22847] = anon_sym_DOLLAR_LPAREN;
	v->a[22848] = actions(747);
	v->a[22849] = 1;
	v->a[22850] = anon_sym_BQUOTE;
	v->a[22851] = state(220);
	v->a[22852] = 2;
	v->a[22853] = sym_concatenation;
	v->a[22854] = aux_sym_for_statement_repeat1;
	v->a[22855] = actions(729);
	v->a[22856] = 3;
	v->a[22857] = sym_raw_string;
	v->a[22858] = sym_number;
	v->a[22859] = sym_word;
	small_parse_table_1143(v);
}

void	small_parse_table_1143(t_small_parse_table_array *v)
{
	v->a[22860] = state(577);
	v->a[22861] = 5;
	v->a[22862] = sym_arithmetic_expansion;
	v->a[22863] = sym_string;
	v->a[22864] = sym_simple_expansion;
	v->a[22865] = sym_expansion;
	v->a[22866] = sym_command_substitution;
	v->a[22867] = actions(582);
	v->a[22868] = 18;
	v->a[22869] = anon_sym_esac;
	v->a[22870] = anon_sym_PIPE;
	v->a[22871] = anon_sym_SEMI_SEMI;
	v->a[22872] = anon_sym_AMP_AMP;
	v->a[22873] = anon_sym_PIPE_PIPE;
	v->a[22874] = anon_sym_LT;
	v->a[22875] = anon_sym_GT;
	v->a[22876] = anon_sym_GT_GT;
	v->a[22877] = anon_sym_LT_AMP;
	v->a[22878] = anon_sym_GT_AMP;
	v->a[22879] = anon_sym_GT_PIPE;
	small_parse_table_1144(v);
}

void	small_parse_table_1144(t_small_parse_table_array *v)
{
	v->a[22880] = anon_sym_LT_AMP_DASH;
	v->a[22881] = anon_sym_GT_AMP_DASH;
	v->a[22882] = anon_sym_LT_LT;
	v->a[22883] = anon_sym_LT_LT_DASH;
	v->a[22884] = aux_sym_heredoc_redirect_token1;
	v->a[22885] = anon_sym_AMP;
	v->a[22886] = anon_sym_SEMI;
	v->a[22887] = 12;
	v->a[22888] = actions(3);
	v->a[22889] = 1;
	v->a[22890] = sym_comment;
	v->a[22891] = actions(682);
	v->a[22892] = 1;
	v->a[22893] = anon_sym_PIPE;
	v->a[22894] = actions(690);
	v->a[22895] = 1;
	v->a[22896] = sym_file_descriptor;
	v->a[22897] = actions(695);
	v->a[22898] = 1;
	v->a[22899] = anon_sym_RPAREN;
	small_parse_table_1145(v);
}

/* EOF small_parse_table_228.c */
