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
	v->a[22800] = actions(1037);
	v->a[22801] = 1;
	v->a[22802] = sym_variable_name;
	v->a[22803] = actions(1033);
	v->a[22804] = 2;
	v->a[22805] = anon_sym_AMP_AMP;
	v->a[22806] = anon_sym_PIPE_PIPE;
	v->a[22807] = state(1277);
	v->a[22808] = 2;
	v->a[22809] = sym_variable_assignment;
	v->a[22810] = aux_sym__variable_assignments_repeat1;
	v->a[22811] = state(1225);
	v->a[22812] = 3;
	v->a[22813] = sym_file_redirect;
	v->a[22814] = sym_heredoc_redirect;
	v->a[22815] = aux_sym_redirected_statement_repeat1;
	v->a[22816] = actions(576);
	v->a[22817] = 12;
	v->a[22818] = anon_sym_LT;
	v->a[22819] = anon_sym_GT;
	small_parse_table_1141(v);
}

void	small_parse_table_1141(t_small_parse_table_array *v)
{
	v->a[22820] = anon_sym_GT_GT;
	v->a[22821] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22822] = anon_sym_DOLLAR;
	v->a[22823] = anon_sym_DQUOTE;
	v->a[22824] = sym_raw_string;
	v->a[22825] = sym_number;
	v->a[22826] = anon_sym_DOLLAR_LBRACE;
	v->a[22827] = anon_sym_DOLLAR_LPAREN;
	v->a[22828] = anon_sym_BQUOTE;
	v->a[22829] = sym_word;
	v->a[22830] = 4;
	v->a[22831] = actions(3);
	v->a[22832] = 1;
	v->a[22833] = sym_comment;
	v->a[22834] = actions(1044);
	v->a[22835] = 1;
	v->a[22836] = sym_variable_name;
	v->a[22837] = actions(1042);
	v->a[22838] = 2;
	v->a[22839] = anon_sym_esac;
	small_parse_table_1142(v);
}

void	small_parse_table_1142(t_small_parse_table_array *v)
{
	v->a[22840] = anon_sym_SEMI_SEMI;
	v->a[22841] = actions(1040);
	v->a[22842] = 20;
	v->a[22843] = anon_sym_for;
	v->a[22844] = anon_sym_while;
	v->a[22845] = anon_sym_until;
	v->a[22846] = anon_sym_if;
	v->a[22847] = anon_sym_case;
	v->a[22848] = anon_sym_LPAREN;
	v->a[22849] = anon_sym_LBRACE;
	v->a[22850] = anon_sym_BANG;
	v->a[22851] = anon_sym_LT;
	v->a[22852] = anon_sym_GT;
	v->a[22853] = anon_sym_GT_GT;
	v->a[22854] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22855] = anon_sym_DOLLAR;
	v->a[22856] = anon_sym_DQUOTE;
	v->a[22857] = sym_raw_string;
	v->a[22858] = sym_number;
	v->a[22859] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1143(v);
}

void	small_parse_table_1143(t_small_parse_table_array *v)
{
	v->a[22860] = anon_sym_DOLLAR_LPAREN;
	v->a[22861] = anon_sym_BQUOTE;
	v->a[22862] = sym_word;
	v->a[22863] = 3;
	v->a[22864] = actions(3);
	v->a[22865] = 1;
	v->a[22866] = sym_comment;
	v->a[22867] = actions(1046);
	v->a[22868] = 3;
	v->a[22869] = sym__concat;
	v->a[22870] = sym__bare_dollar;
	v->a[22871] = ts_builtin_sym_end;
	v->a[22872] = actions(1048);
	v->a[22873] = 20;
	v->a[22874] = anon_sym_PIPE;
	v->a[22875] = anon_sym_SEMI_SEMI;
	v->a[22876] = anon_sym_AMP_AMP;
	v->a[22877] = anon_sym_PIPE_PIPE;
	v->a[22878] = anon_sym_LT;
	v->a[22879] = anon_sym_GT;
	small_parse_table_1144(v);
}

void	small_parse_table_1144(t_small_parse_table_array *v)
{
	v->a[22880] = anon_sym_GT_GT;
	v->a[22881] = anon_sym_LT_LT;
	v->a[22882] = aux_sym_heredoc_redirect_token1;
	v->a[22883] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22884] = aux_sym_concatenation_token1;
	v->a[22885] = anon_sym_DOLLAR;
	v->a[22886] = anon_sym_DQUOTE;
	v->a[22887] = sym_raw_string;
	v->a[22888] = sym_number;
	v->a[22889] = anon_sym_DOLLAR_LBRACE;
	v->a[22890] = anon_sym_DOLLAR_LPAREN;
	v->a[22891] = anon_sym_BQUOTE;
	v->a[22892] = sym_word;
	v->a[22893] = anon_sym_SEMI;
	v->a[22894] = 4;
	v->a[22895] = actions(3);
	v->a[22896] = 1;
	v->a[22897] = sym_comment;
	v->a[22898] = actions(1044);
	v->a[22899] = 1;
	small_parse_table_1145(v);
}

/* EOF small_parse_table_228.c */
