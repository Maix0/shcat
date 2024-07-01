/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_538.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2690(t_small_parse_table_array *v)
{
	v->a[53800] = anon_sym_PIPE_PIPE;
	v->a[53801] = anon_sym_LT;
	v->a[53802] = anon_sym_GT;
	v->a[53803] = anon_sym_GT_GT;
	v->a[53804] = anon_sym_LT_AMP;
	v->a[53805] = anon_sym_GT_AMP;
	v->a[53806] = anon_sym_GT_PIPE;
	v->a[53807] = anon_sym_LT_GT;
	v->a[53808] = anon_sym_LT_LT;
	v->a[53809] = anon_sym_LT_LT_DASH;
	v->a[53810] = anon_sym_AMP;
	v->a[53811] = anon_sym_SEMI;
	v->a[53812] = 11;
	v->a[53813] = actions(3);
	v->a[53814] = 1;
	v->a[53815] = sym_comment;
	v->a[53816] = actions(736);
	v->a[53817] = 1;
	v->a[53818] = anon_sym_PIPE;
	v->a[53819] = actions(1851);
	small_parse_table_2691(v);
}

void	small_parse_table_2691(t_small_parse_table_array *v)
{
	v->a[53820] = 1;
	v->a[53821] = aux_sym_heredoc_redirect_token1;
	v->a[53822] = actions(1853);
	v->a[53823] = 1;
	v->a[53824] = sym_file_descriptor;
	v->a[53825] = state(689);
	v->a[53826] = 1;
	v->a[53827] = sym_terminator;
	v->a[53828] = actions(755);
	v->a[53829] = 2;
	v->a[53830] = anon_sym_AMP_AMP;
	v->a[53831] = anon_sym_PIPE_PIPE;
	v->a[53832] = actions(757);
	v->a[53833] = 2;
	v->a[53834] = anon_sym_LT_LT;
	v->a[53835] = anon_sym_LT_LT_DASH;
	v->a[53836] = actions(759);
	v->a[53837] = 2;
	v->a[53838] = anon_sym_AMP;
	v->a[53839] = anon_sym_SEMI;
	small_parse_table_2692(v);
}

void	small_parse_table_2692(t_small_parse_table_array *v)
{
	v->a[53840] = actions(842);
	v->a[53841] = 2;
	v->a[53842] = anon_sym_esac;
	v->a[53843] = anon_sym_SEMI_SEMI;
	v->a[53844] = state(1094);
	v->a[53845] = 3;
	v->a[53846] = sym_file_redirect;
	v->a[53847] = sym_heredoc_redirect;
	v->a[53848] = aux_sym_redirected_statement_repeat1;
	v->a[53849] = actions(1849);
	v->a[53850] = 7;
	v->a[53851] = anon_sym_LT;
	v->a[53852] = anon_sym_GT;
	v->a[53853] = anon_sym_GT_GT;
	v->a[53854] = anon_sym_LT_AMP;
	v->a[53855] = anon_sym_GT_AMP;
	v->a[53856] = anon_sym_GT_PIPE;
	v->a[53857] = anon_sym_LT_GT;
	v->a[53858] = 11;
	v->a[53859] = actions(3);
	small_parse_table_2693(v);
}

void	small_parse_table_2693(t_small_parse_table_array *v)
{
	v->a[53860] = 1;
	v->a[53861] = sym_comment;
	v->a[53862] = actions(736);
	v->a[53863] = 1;
	v->a[53864] = anon_sym_PIPE;
	v->a[53865] = actions(1851);
	v->a[53866] = 1;
	v->a[53867] = aux_sym_heredoc_redirect_token1;
	v->a[53868] = actions(1853);
	v->a[53869] = 1;
	v->a[53870] = sym_file_descriptor;
	v->a[53871] = state(690);
	v->a[53872] = 1;
	v->a[53873] = sym_terminator;
	v->a[53874] = actions(755);
	v->a[53875] = 2;
	v->a[53876] = anon_sym_AMP_AMP;
	v->a[53877] = anon_sym_PIPE_PIPE;
	v->a[53878] = actions(757);
	v->a[53879] = 2;
	small_parse_table_2694(v);
}

void	small_parse_table_2694(t_small_parse_table_array *v)
{
	v->a[53880] = anon_sym_LT_LT;
	v->a[53881] = anon_sym_LT_LT_DASH;
	v->a[53882] = actions(759);
	v->a[53883] = 2;
	v->a[53884] = anon_sym_AMP;
	v->a[53885] = anon_sym_SEMI;
	v->a[53886] = actions(842);
	v->a[53887] = 2;
	v->a[53888] = anon_sym_esac;
	v->a[53889] = anon_sym_SEMI_SEMI;
	v->a[53890] = state(1094);
	v->a[53891] = 3;
	v->a[53892] = sym_file_redirect;
	v->a[53893] = sym_heredoc_redirect;
	v->a[53894] = aux_sym_redirected_statement_repeat1;
	v->a[53895] = actions(1849);
	v->a[53896] = 7;
	v->a[53897] = anon_sym_LT;
	v->a[53898] = anon_sym_GT;
	v->a[53899] = anon_sym_GT_GT;
	small_parse_table_2695(v);
}

/* EOF small_parse_table_538.c */
