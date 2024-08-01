/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_508.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2540(t_small_parse_table_array *v)
{
	v->a[50800] = 1;
	v->a[50801] = sym_string_content;
	v->a[50802] = actions(2301);
	v->a[50803] = 1;
	v->a[50804] = anon_sym_DOLLAR_LBRACE;
	v->a[50805] = actions(2303);
	v->a[50806] = 1;
	v->a[50807] = anon_sym_DOLLAR_LPAREN;
	v->a[50808] = actions(2305);
	v->a[50809] = 1;
	v->a[50810] = anon_sym_BQUOTE;
	v->a[50811] = actions(2534);
	v->a[50812] = 1;
	v->a[50813] = anon_sym_DOLLAR;
	v->a[50814] = actions(2536);
	v->a[50815] = 1;
	v->a[50816] = anon_sym_DQUOTE;
	v->a[50817] = state(1176);
	v->a[50818] = 1;
	v->a[50819] = aux_sym_string_repeat1;
	small_parse_table_2541(v);
}

void	small_parse_table_2541(t_small_parse_table_array *v)
{
	v->a[50820] = state(1394);
	v->a[50821] = 4;
	v->a[50822] = sym_arithmetic_expansion;
	v->a[50823] = sym_simple_expansion;
	v->a[50824] = sym_expansion;
	v->a[50825] = sym_command_substitution;
	v->a[50826] = 5;
	v->a[50827] = actions(3);
	v->a[50828] = 1;
	v->a[50829] = sym_comment;
	v->a[50830] = actions(2357);
	v->a[50831] = 1;
	v->a[50832] = aux_sym_heredoc_redirect_token1;
	v->a[50833] = actions(2538);
	v->a[50834] = 1;
	v->a[50835] = anon_sym_PIPE;
	v->a[50836] = state(1154);
	v->a[50837] = 1;
	v->a[50838] = aux_sym_pipeline_repeat1;
	v->a[50839] = actions(2353);
	small_parse_table_2542(v);
}

void	small_parse_table_2542(t_small_parse_table_array *v)
{
	v->a[50840] = 9;
	v->a[50841] = anon_sym_RPAREN;
	v->a[50842] = anon_sym_SEMI_SEMI;
	v->a[50843] = anon_sym_AMP_AMP;
	v->a[50844] = anon_sym_PIPE_PIPE;
	v->a[50845] = anon_sym_LT;
	v->a[50846] = anon_sym_GT;
	v->a[50847] = anon_sym_GT_GT;
	v->a[50848] = anon_sym_LT_LT;
	v->a[50849] = anon_sym_SEMI;
	v->a[50850] = 5;
	v->a[50851] = actions(3);
	v->a[50852] = 1;
	v->a[50853] = sym_comment;
	v->a[50854] = actions(1974);
	v->a[50855] = 1;
	v->a[50856] = aux_sym_heredoc_redirect_token1;
	v->a[50857] = actions(1976);
	v->a[50858] = 1;
	v->a[50859] = anon_sym_PIPE;
	small_parse_table_2543(v);
}

void	small_parse_table_2543(t_small_parse_table_array *v)
{
	v->a[50860] = state(1385);
	v->a[50861] = 1;
	v->a[50862] = aux_sym_pipeline_repeat1;
	v->a[50863] = actions(1979);
	v->a[50864] = 9;
	v->a[50865] = anon_sym_esac;
	v->a[50866] = anon_sym_SEMI_SEMI;
	v->a[50867] = anon_sym_AMP_AMP;
	v->a[50868] = anon_sym_PIPE_PIPE;
	v->a[50869] = anon_sym_LT;
	v->a[50870] = anon_sym_GT;
	v->a[50871] = anon_sym_GT_GT;
	v->a[50872] = anon_sym_LT_LT;
	v->a[50873] = anon_sym_SEMI;
	v->a[50874] = 5;
	v->a[50875] = actions(3);
	v->a[50876] = 1;
	v->a[50877] = sym_comment;
	v->a[50878] = actions(1974);
	v->a[50879] = 1;
	small_parse_table_2544(v);
}

void	small_parse_table_2544(t_small_parse_table_array *v)
{
	v->a[50880] = aux_sym_heredoc_redirect_token1;
	v->a[50881] = actions(2540);
	v->a[50882] = 1;
	v->a[50883] = anon_sym_PIPE;
	v->a[50884] = state(1165);
	v->a[50885] = 1;
	v->a[50886] = aux_sym_pipeline_repeat1;
	v->a[50887] = actions(1979);
	v->a[50888] = 9;
	v->a[50889] = anon_sym_esac;
	v->a[50890] = anon_sym_SEMI_SEMI;
	v->a[50891] = anon_sym_AMP_AMP;
	v->a[50892] = anon_sym_PIPE_PIPE;
	v->a[50893] = anon_sym_LT;
	v->a[50894] = anon_sym_GT;
	v->a[50895] = anon_sym_GT_GT;
	v->a[50896] = anon_sym_LT_LT;
	v->a[50897] = anon_sym_SEMI;
	v->a[50898] = 10;
	v->a[50899] = actions(3);
	small_parse_table_2545(v);
}

/* EOF small_parse_table_508.c */
