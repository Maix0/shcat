/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1088.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5440(t_small_parse_table_array *v)
{
	v->a[108800] = anon_sym_LT_LT_DASH;
	v->a[108801] = anon_sym_AMP;
	v->a[108802] = anon_sym_SEMI;
	v->a[108803] = 5;
	v->a[108804] = actions(3);
	v->a[108805] = 1;
	v->a[108806] = sym_comment;
	v->a[108807] = actions(2516);
	v->a[108808] = 2;
	v->a[108809] = anon_sym_PIPE;
	v->a[108810] = anon_sym_PIPE_AMP;
	v->a[108811] = actions(2632);
	v->a[108812] = 2;
	v->a[108813] = sym_file_descriptor;
	v->a[108814] = aux_sym_heredoc_redirect_token1;
	v->a[108815] = state(2295);
	v->a[108816] = 3;
	v->a[108817] = sym_file_redirect;
	v->a[108818] = sym_heredoc_redirect;
	v->a[108819] = aux_sym_redirected_statement_repeat1;
	small_parse_table_5441(v);
}

void	small_parse_table_5441(t_small_parse_table_array *v)
{
	v->a[108820] = actions(2630);
	v->a[108821] = 17;
	v->a[108822] = anon_sym_SEMI_SEMI;
	v->a[108823] = anon_sym_AMP_AMP;
	v->a[108824] = anon_sym_PIPE_PIPE;
	v->a[108825] = anon_sym_LT;
	v->a[108826] = anon_sym_GT;
	v->a[108827] = anon_sym_GT_GT;
	v->a[108828] = anon_sym_AMP_GT;
	v->a[108829] = anon_sym_AMP_GT_GT;
	v->a[108830] = anon_sym_LT_AMP;
	v->a[108831] = anon_sym_GT_AMP;
	v->a[108832] = anon_sym_GT_PIPE;
	v->a[108833] = anon_sym_LT_AMP_DASH;
	v->a[108834] = anon_sym_GT_AMP_DASH;
	v->a[108835] = anon_sym_LT_LT;
	v->a[108836] = anon_sym_LT_LT_DASH;
	v->a[108837] = anon_sym_AMP;
	v->a[108838] = anon_sym_SEMI;
	v->a[108839] = 3;
	small_parse_table_5442(v);
}

void	small_parse_table_5442(t_small_parse_table_array *v)
{
	v->a[108840] = actions(3);
	v->a[108841] = 1;
	v->a[108842] = sym_comment;
	v->a[108843] = actions(6167);
	v->a[108844] = 3;
	v->a[108845] = sym_file_descriptor;
	v->a[108846] = ts_builtin_sym_end;
	v->a[108847] = aux_sym_heredoc_redirect_token1;
	v->a[108848] = actions(6165);
	v->a[108849] = 21;
	v->a[108850] = anon_sym_PIPE;
	v->a[108851] = anon_sym_RPAREN;
	v->a[108852] = anon_sym_SEMI_SEMI;
	v->a[108853] = anon_sym_PIPE_AMP;
	v->a[108854] = anon_sym_AMP_AMP;
	v->a[108855] = anon_sym_PIPE_PIPE;
	v->a[108856] = anon_sym_LT;
	v->a[108857] = anon_sym_GT;
	v->a[108858] = anon_sym_GT_GT;
	v->a[108859] = anon_sym_AMP_GT;
	small_parse_table_5443(v);
}

void	small_parse_table_5443(t_small_parse_table_array *v)
{
	v->a[108860] = anon_sym_AMP_GT_GT;
	v->a[108861] = anon_sym_LT_AMP;
	v->a[108862] = anon_sym_GT_AMP;
	v->a[108863] = anon_sym_GT_PIPE;
	v->a[108864] = anon_sym_LT_AMP_DASH;
	v->a[108865] = anon_sym_GT_AMP_DASH;
	v->a[108866] = anon_sym_LT_LT;
	v->a[108867] = anon_sym_LT_LT_DASH;
	v->a[108868] = anon_sym_AMP;
	v->a[108869] = anon_sym_BQUOTE;
	v->a[108870] = anon_sym_SEMI;
	v->a[108871] = 17;
	v->a[108872] = actions(57);
	v->a[108873] = 1;
	v->a[108874] = sym_comment;
	v->a[108875] = actions(1969);
	v->a[108876] = 1;
	v->a[108877] = sym_word;
	v->a[108878] = actions(1973);
	v->a[108879] = 1;
	small_parse_table_5444(v);
}

void	small_parse_table_5444(t_small_parse_table_array *v)
{
	v->a[108880] = anon_sym_DOLLAR;
	v->a[108881] = actions(1979);
	v->a[108882] = 1;
	v->a[108883] = aux_sym_number_token1;
	v->a[108884] = actions(1981);
	v->a[108885] = 1;
	v->a[108886] = aux_sym_number_token2;
	v->a[108887] = actions(1985);
	v->a[108888] = 1;
	v->a[108889] = anon_sym_DOLLAR_LPAREN;
	v->a[108890] = actions(1993);
	v->a[108891] = 1;
	v->a[108892] = sym__brace_start;
	v->a[108893] = actions(6246);
	v->a[108894] = 1;
	v->a[108895] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[108896] = actions(6248);
	v->a[108897] = 1;
	v->a[108898] = sym__special_character;
	v->a[108899] = actions(6250);
	small_parse_table_5445(v);
}

/* EOF small_parse_table_1088.c */
